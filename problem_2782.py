#PROBLEM 2782
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2782
#PYTHON 3
quantidade_numeros = int(input())
numeros = input().split(" ")
numeros = [int(c) for c in numeros]

if quantidade_numeros == 1:
    print(1)
else:
    escadinhas = 1

    numero1 = numeros[0]
    numero2 = numeros[1]
    diferenca = numero2 - numero1
    
    for i in range(1, quantidade_numeros-1):
        numero1 = numeros[i]
        numero2 = numeros[i+1]

        if (numero2 - numero1 != diferenca):
            diferenca = numero2 - numero1
            escadinhas += 1
            
    print(escadinhas)