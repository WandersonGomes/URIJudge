#PROBLEM 1140
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1140
#PYTHON 3
while True:
    frase = input().split(" ")
        
    if frase[0] == '*':
        break
    
    aux = []
    for palavra in frase:
        palavra = palavra.upper()
        aux.append(palavra[0])

    if (len(aux) == aux.count(aux[0])):
        print("Y")
    else:
        print("N")