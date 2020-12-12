//PROBLEM 1083
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1083
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

#define OPERANDO 1
#define PARENTESE_ABERTURA 2
#define PARENTESE_FECHAMENTO 3
#define OPERADOR 4

#define SYNTAX_ERROR 1
#define LEXICAL_ERROR 2

//PILHA
typedef struct stack {
    int size;
    int top;
    char datas[MAX];
} Stack;

//criar pilha
Stack* create() {
    Stack* tmp = (Stack*) malloc(sizeof(Stack));
    tmp->size = 0;
    tmp->top = -1;
    return tmp;
}

int isEmpty(Stack* stack) {
    return (stack->size == 0);
}

void push(Stack* stack, char data) {
    stack->top++;
    stack->datas[stack->top] = data;
    stack->size++;
}

char pop(Stack* stack) {
    char result = stack->datas[stack->top];
    stack->top--;
    stack->size--;
    return result;
}

char peek(Stack* stack) {
    return stack->datas[stack->top];
}

void clear(Stack* stack) {
    free(stack);
}

//FUNCAO QUE INFORMA A PRIORIDADE DO OPERADOR
int prioridade(char operador) {
    if (operador == '^')
        return 6;
    if ((operador == '*') || (operador == '/'))
        return 5;
    if ((operador == '+') || (operador == '-'))
        return 4;
    if ((operador == '>') || (operador == '<') || (operador == '=') || (operador == '#'))
        return 3;
    if (operador == '.')
        return 2;
    if (operador == '|')
        return 1;
    return 0;
}

//FUNCAO QUE INFORMA QUE TIPO DE ELEMENTO EH
int tipoElemento(char elemento) {
    //operando
    if ((elemento >= 'a') && (elemento <= 'z'))
        return OPERANDO;
    if ((elemento >= 'A') && (elemento <= 'Z'))
        return OPERANDO;
    if ((elemento >= '0') && (elemento <= '9'))
        return OPERANDO;

    //parentese
    if (elemento == '(')
        return PARENTESE_ABERTURA;
    if (elemento == ')')
        return PARENTESE_FECHAMENTO;

    //operador
    if ((elemento == '^') || (elemento == '*') || (elemento == '/'))
        return OPERADOR;
    if ((elemento == '+') || (elemento == '-'))
        return OPERADOR;
    if ((elemento == '>') || (elemento == '<') || (elemento == '=') || (elemento == '#'))
        return OPERADOR;
    if ((elemento == '.') || (elemento == '|'))
        return OPERADOR;

    return -1;
}

//FUNCAO PARA IMPRIMIR A PILHA DA BASE PARA O TOPO
void print(Stack* stack) {
    int i = 0;
    for (; i < stack->size; i++) 
        printf("%c", stack->datas[i]);
    printf("\n");
}

//PROGRAMA PRINCIPAL
int main() {
    char infixa[MAX];
    Stack *posfixa = NULL, *auxiliar = NULL;
    int i = 0, tam = 0, tipo_elemento_atual = 0;
    int tipo_error = 0, tipo_elemento_anterior = -1;
    int operando = 0;

    while (scanf("%s", infixa) != EOF) {
        posfixa = create();
        auxiliar = create();

        tipo_error = 0;
        tipo_elemento_anterior = -1;
        operando = 0;

        tam = strlen(infixa);
        for (i = 0; i < tam; i++) {
            tipo_elemento_atual = tipoElemento(infixa[i]);

            if (tipo_elemento_atual == PARENTESE_ABERTURA) {
                //verifica se o anterior era um parentese de fechamento
                if (tipo_elemento_anterior == PARENTESE_FECHAMENTO) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }
                push(auxiliar, infixa[i]);
            } else if (tipo_elemento_atual == OPERANDO) {
                //caso seja dois operandos iguais
                if (tipo_elemento_anterior == tipo_elemento_atual) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }

                //caso o anterior seja um parentese de fechamento
                if (tipo_elemento_anterior == PARENTESE_FECHAMENTO) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }

                push(posfixa, infixa[i]);
                operando = 1; //teve pelo menos um operando
            } else if (tipo_elemento_atual == OPERADOR) {
                if (tipo_elemento_anterior == OPERADOR) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }

                if (isEmpty(posfixa)) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }

                if (tipo_elemento_anterior == PARENTESE_ABERTURA) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }

                if (isEmpty(auxiliar)) {
                    push(auxiliar, infixa[i]);
                } else {
                    if (prioridade(peek(auxiliar)) < prioridade(infixa[i]))
                        push(auxiliar, infixa[i]);
                    else {
                        while (!isEmpty(auxiliar)) {
                            if (prioridade(peek(auxiliar)) >= prioridade(infixa[i]))
                                push(posfixa, pop(auxiliar));
                            else
                                break;                            
                        }
                        push(auxiliar, infixa[i]);
                    }
                }
            } else if (tipo_elemento_atual == PARENTESE_FECHAMENTO) {
                if (isEmpty(auxiliar)) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }

                if ((peek(auxiliar) == '(') && (isEmpty(posfixa))) {
                    tipo_error = SYNTAX_ERROR;
                    break;
                }

                while (!isEmpty(auxiliar)) {
                    if (peek(auxiliar) != '(') { //parentese de abertura
                        push(posfixa, pop(auxiliar)); 
                        tipo_error = SYNTAX_ERROR;
                    } else {
                        pop(auxiliar);
                        tipo_error = 0;
                        break;
                    }
                }
            } else {
                tipo_error = LEXICAL_ERROR;
            }

            //guarda o tipo de elemento anterior
            tipo_elemento_anterior = tipo_elemento_atual;

            //verifica se ocorreu algum tipo de erro e termina a execucao
            if (tipo_error == SYNTAX_ERROR)
                break;
            if (tipo_error == LEXICAL_ERROR)
                break;
        }

        //pega o restante que ta na pilha auxiliar
        while (!isEmpty(auxiliar) && !tipo_error) {
            if (peek(auxiliar) == '(') {
                tipo_error = SYNTAX_ERROR;
                break;
            }
            push(posfixa, pop(auxiliar));
        }

        //se nao tem nada na posfixa
        if (isEmpty(posfixa) && !tipo_error)
            tipo_error = SYNTAX_ERROR;

        if (!operando && !tipo_error)
            tipo_error = SYNTAX_ERROR;

        if (tipo_error == SYNTAX_ERROR)
            printf("Syntax Error!\n");
        else if (tipo_error == LEXICAL_ERROR)
            printf("Lexical Error!\n");
        else
            print(posfixa);

        clear(posfixa);
        clear(auxiliar);
    }

    return 0;
}