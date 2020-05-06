#PROBLEM 2456
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2456
#PYTHON 3
numeros = input().split()
numeros = [int(valor) for valor in numeros]

crescente = numeros[:]
crescente.sort()
decrescente = numeros[:]
decrescente.sort(reverse=True)

if numeros == crescente:
    print("C")
elif numeros == decrescente:
    print("D")
else:
    print("N")
