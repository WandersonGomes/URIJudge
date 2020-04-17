#PROBLEM 2396
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2396

while True:
    try:
        numero_carros, numeros_voltas = input().split(" ")
        numero_carros, numeros_voltas = int(numero_carros), int(numeros_voltas)

        tempos = []

        for i in range(0, numero_carros):
            total_tempo_corrida = 0
            tempo_voltas = input().split(" ")
            for tmp in tempo_voltas:
                total_tempo_corrida += int(tmp)
            tempos.append(total_tempo_corrida)
        
        organizado = tempos[:]
        organizado.sort()

        print(tempos.index(organizado[0]) + 1)
        print(tempos.index(organizado[1]) + 1)
        print(tempos.index(organizado[2]) + 1)

    except EOFError:
        break;