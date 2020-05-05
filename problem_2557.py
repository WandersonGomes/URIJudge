#PROBLEM 2557
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2557
#PYTHON 3

while True:
    try:
        linha = input()
        linha = linha.split("+")
        valor_r = linha[0]
        linha = linha[1].split("=")
        valor_l = linha[0]
        valor_j = linha[1]

        if valor_r == 'R':
            print(int(valor_j) - int(valor_l))
        elif valor_l == 'L':
            print(int(valor_j) - int(valor_r))
        else:
            print(int(valor_r) + int(valor_l))

    except EOFError:
        break