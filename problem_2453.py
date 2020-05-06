#PROBLEM 2453
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2453
#PYTHON 3

linha = input()

flag = False #flag para sinalizar o encontro de uma letra p

for letra in linha:
    if letra != 'p':
        print(letra, end="")
        flag = False
    elif letra == 'p':
        if flag:
            flag = False
            print(letra, end="")
        else:
            flag = True

print()
