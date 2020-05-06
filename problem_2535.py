#PROBLEM 2535
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2535
#PYTHON 3

while True:
    try:
        quantidade_filhotes = int(input())

        resultado = 0
        for i in range(0, quantidade_filhotes):
            especie = input()
            raca = input().split()
            nome = input().split()
            input()

            if especie == 'cachorro':
                if len(nome) >= 2:
                    for n in nome:
                        if n[0] == raca[0][0]:
                            resultado += 1
                            break
        print(resultado)
    except EOFError:
        break