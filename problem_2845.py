#PROBLEM 2845
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2845
#PYTHON 3

#FUNCAO RECURSIVA DO ALGORITMO DE EUCLIDES
def mdc_recursivo(numero1, numero2):
    if (numero2 == 0):
        return numero1
    return mdc_recursivo(numero2, numero1%numero2)


#PROGRAMA PRINCIPAL
quantidade_valores = int(input())
duendes = input().split(" ")
duendes = [int(c) for c in duendes]

duendes.sort(reverse = True)

numero = duendes[0]
while True:
    flag = True
    numero += 1

    for duende in duendes:
        if (mdc_recursivo(numero, duende) > 1):
            flag = False
            break
    
    if flag:
        break

print(numero)