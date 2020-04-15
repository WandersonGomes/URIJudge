#PROBLEM 2381
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2381
#PYTHON 3
quantidade_alunos, numero_sorteado = input().split(" ")
quantidade_alunos, numero_sorteado = int(quantidade_alunos), int(numero_sorteado)

nomes_alunos = []
for i in range(0, quantidade_alunos):
    nome_aluno = input()
    nomes_alunos.append(nome_aluno)

nomes_alunos.sort()

print(nomes_alunos[numero_sorteado-1])