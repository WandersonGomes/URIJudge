#PROBLEM 2958
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2958
#PYTHON 3
linhas, colunas = input().split(" ")
linhas, colunas = int(linhas), int(colunas)

problemas_vida = []
problemas_disciplina = []

for i in range(0, linhas):
    problemas = input().split(" ");
    for problema in problemas:
        if problema[1] == 'V':
            problemas_vida.append(problema)
        else:
            problemas_disciplina.append(problema)

problemas_vida.sort(reverse=True)
problemas_disciplina.sort(reverse=True)

for problema in problemas_vida:
    print(problema)

for problema in problemas_disciplina:
    print(problema)