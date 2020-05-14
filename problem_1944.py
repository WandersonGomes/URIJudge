#PROBLEM 1944
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1944
#PYTHON 3

quantidade_participantes = int(input())

organizacao = ['F','A','C','E']
atual = [] + organizacao
tamanho = 4
resultado = 0
for i in range(0, quantidade_participantes):
    participante = input().split()
    if participante[::-1] == atual[tamanho-4:tamanho]:
        resultado += 1
        tamanho -= 4
        for j in range(0, 4):
            atual.pop()
        if len(atual) == 0:
            atual = [] + organizacao
            tamanho = 4
    else:
        tamanho += 4
        atual += participante

print(resultado)