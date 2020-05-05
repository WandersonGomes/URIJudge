#PROBLEM 3038
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3038
#PYTHON 3
while True:
    try:
        texto = input()
        texto = texto.replace("@","a")
        texto = texto.replace("&","e")
        texto = texto.replace("!","i")
        texto = texto.replace("*","o")
        texto = texto.replace("#","u")
        print(texto)
    except EOFError:
        break