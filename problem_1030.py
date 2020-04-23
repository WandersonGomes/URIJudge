#PROBLEM 1030
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1030
#PYTHON 3
import sys
sys.setrecursionlimit(20000)

quantidade_testes = int(input())

def josephusRecursiva(pessoas, pulos):
    if pessoas == 1:
        return 1
    else:
        return (pulos - 1 + josephusRecursiva(pessoas - 1, pulos))%pessoas + 1

for i in range(0, quantidade_testes):
    quantidade_pessoas, pulos = input().split(" ")
    quantidade_pessoas, pulos = int(quantidade_pessoas), int(pulos)

    print("Case %d: %d" % (i + 1,josephusRecursiva(quantidade_pessoas, pulos)))
    