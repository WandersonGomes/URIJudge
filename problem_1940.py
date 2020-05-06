#PROBLEM 1940
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1940
#PYTHON 3
quantidade_jogadores, quantidade_rodadas = input().split()
quantidade_jogadores, quantidade_rodadas = int(quantidade_jogadores), int(quantidade_rodadas)

pontos = input().split()
pontos = [int(valor) for valor in pontos]

#inicializa
jogadores = []
for i in range(0, quantidade_jogadores):
    jogadores.append(0)

k = 0
for i in range(0, quantidade_rodadas):
    for j in range(0, quantidade_jogadores):
        jogadores[j] += pontos[k]
        k += 1

vencedor = 0
maior_pontos = 0
for i in range(0, quantidade_jogadores):
    if jogadores[i] >= maior_pontos:
        maior_pontos = jogadores[i]
        vencedor = i 

print(vencedor + 1)

