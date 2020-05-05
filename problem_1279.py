#PROBLEM 1279
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1279
#PYTHON 3

#FUNCAO QUE VERIFICA SE O ANO EH BISSEXTO
def ehBissexto(ano):
    if ano%400 == 0:
        return True
    if (ano%4 == 0) and (ano%100 != 0):
        return True

    return False     

#FUNCAO QUE VERIFICA SE O ANO EH DE FESTIVAL HULUCULU
def anoHuluculu(ano):
    if ano%15 == 0:
        return True
    return False

#FUNCAO QUE VERIFICA SE O ANO EH DE FESTIVAL BULUKULU
def anoBulukulu(ano, bissexto):
    if bissexto and (ano%55 == 0):
        return True
    return False

#PROGRAMA PRINCIPAL
flag = False
while True:
    try:
        ano = int(input())
        if flag:
            print()

        bissexto = ehBissexto(ano)
        ordinary = True
        if bissexto:
            print("This is leap year.")
            ordinary = False
        
        if anoHuluculu(ano):
            print("This is huluculu festival year.")
            ordinary = False

        if anoBulukulu(ano, bissexto):
            print("This is bulukulu festival year.")

        if ordinary:
            print("This is an ordinary year.")

        flag = True
    except EOFError:
        break
