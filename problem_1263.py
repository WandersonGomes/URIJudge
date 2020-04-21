#PROBLEM 1263
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1263
#PYTHON 3
while True:
    try:
        palavras = input().split(" ")

        aux = []
        contador = 0

        for palavra in palavras:
            palavra = palavra.upper()
            if palavra[0] not in aux:
                if (len(aux) > 1):
                    contador += 1
                aux = []
                aux.append(palavra[0])
            else:
                aux.append(palavra[0])

        if (len(aux) > 1):
            contador += 1
        
        print(contador)

    except EOFError:
        break