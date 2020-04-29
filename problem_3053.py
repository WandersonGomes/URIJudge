#PROBLEM 3053
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3053
#PYTHON 3
copos = [0, 0, 0]
quantidade_movimentos = int(input())
letra = input()

if letra == 'A':
    copos[0] = 1 
if letra == 'B':
    copos[1] = 1
if letra == 'C':
    copos[2] = 1

for i in range(0, quantidade_movimentos):
    tmp = 0
    movimento = int(input())

    if movimento == 1:
        tmp = copos[0]
        copos[0] = copos[1]
        copos[1] = tmp
    elif movimento == 2:
        tmp = copos[1]
        copos[1] = copos[2]
        copos[2] = tmp
    else:
        tmp = copos[0]
        copos[0] = copos[2]
        copos[2] = tmp
    
resultado = copos.index(1)
if resultado == 0:
    print("A")
elif resultado == 1:
    print("B")
else:
    print("C")