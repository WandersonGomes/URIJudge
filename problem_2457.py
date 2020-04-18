#PROBLEM 2457
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2457
#PYTHON 3
letra = input()
texto = input().split(" ")

quantidade_palavras_texto = len(texto);
quantidade_palavras_letra = 0

for palavra in texto:
    if palavra.count(letra) > 0:
        quantidade_palavras_letra += 1

print("%.1f" % ((quantidade_palavras_letra/quantidade_palavras_texto) * 100))