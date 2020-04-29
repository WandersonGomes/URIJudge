#PROBLEM 3039
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3039
#PYTHON 3
quantidade_criancas = int(input())
meninos = 0
meninas = 0

for i in range(0, quantidade_criancas):
    nome, sexo = input().split(" ")
    if sexo == 'F':
        meninas += 1
    else:
        meninos += 1

print(meninos, "carrinhos")
print(meninas, "bonecas")