#PROBLEM 1893
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1893
#PYTHON 3
noite1, noite2 = input().split()
noite1, noite2 = int(noite1), int(noite2)

if noite2 <= 2:
    print("nova")
elif noite2 >= 3 and noite2 <= 96:
    if noite1 <= noite2:
        print("crescente")
    else:
        print("minguante")
elif noite2 >= 97:
    print("cheia")