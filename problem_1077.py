#PROBLEM 1077
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1077
#PYTHON 3
#Obs.:
#Para saber mais sobre o assunto assita a seguinte video aula:
#https://www.youtube.com/watch?v=cD6qkvOYL_o&t=97s


#FUNCAO QUE INFORMA SE EH UM OPERANDO OU OPERADOR
def ehOperando(item):
    operadores = ['+','-','*','/','^','(',')']
    return not (item in operadores)

#FUNCAO QUE INFORMA O GRAU DE PRECEDENCIA
def precedencia(item1, item2):
    if item1 == '(':
        return 1
    
    if (item1 == '*' and (item2 == '+' or item2 == '-')):
        return 1
    
    if (item1 == '/' and (item2 == '+' or item2 == '-')):
        return 1
    
    if (item1 == '+' and (item2 == '*' or item2 == '/')):
        return -1
    
    if (item1 == '-' and (item2 == '*' or item2 == '/')):
        return -1
    
    if (item1 == '^' and item2 != '^'):
        return 1
    
    return 0

#PROGRAMA PRINCIPAL
quantidade_testes = int(input())

for i in range(0, quantidade_testes):
    expressao = input()
    expressao = [c for c in expressao]

    posfixa = []
    pilha = []

    while (len(expressao) > 0):
        item_expressao = expressao.pop(0)
        
        #operand
        if ehOperando(item_expressao):
            posfixa.append(item_expressao)
        #left parenthesis
        elif item_expressao == '(':
            pilha.append(item_expressao)
        #right parentesis
        elif item_expressao == ')':
            while True:
                item_pilha = pilha.pop()
                if item_pilha == '(':
                    break
                posfixa.append(item_pilha)
        #operator
        else:
            while True:
                #stack is empty
                if (len(pilha) == 0):
                    pilha.append(item_expressao)
                    break
                #left parenthesis on top
                else:
                    item_pilha = pilha.pop()
                    if item_pilha == '(':
                        pilha.append(item_pilha)
                        pilha.append(item_expressao)
                        break
                    else:
                        if precedencia(item_expressao, item_pilha) == 1:
                            pilha.append(item_pilha)
                            pilha.append(item_expressao)
                            break
                        else:
                            posfixa.append(item_pilha)
    #restante que fica na pilha
    while len(pilha) > 0:
        item_pilha = pilha.pop()
        if item_pilha != '(' and item_pilha != ')':
            posfixa.append(item_pilha)

    for item in posfixa:
        print(item,end="")
    print()