#PROBLEM 2880
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2880
#PYTHON 3
mensagem = input().replace(" ","")
cifra = input().replace(" ","")

tamanho_cifra = len(cifra)
inicio = 0
final = len(mensagem) - tamanho_cifra

crib = 0

while (inicio <= final):
    aux = mensagem[inicio:tamanho_cifra+inicio]

    flag = True
    for indice in range(0, tamanho_cifra):
       if (cifra[indice] == aux[indice]):
           flag = False
           break

    if flag:
        crib += 1
    
    inicio += 1

print(crib) 