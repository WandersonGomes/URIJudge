#PROBLEM 2866
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2866
#PYTHON 3
quantidade_testes = int(input())

for i in range(0, quantidade_testes):
    linha = input()
    resposta = ""
    for letra in linha:
        valor_letra = ord(letra)
        if valor_letra >= 97 and valor_letra <= 122:
            resposta += letra

    print(resposta[::-1])