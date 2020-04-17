#PROBLEM 1262
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1262
#PYTHON 3
while True:
    try:
        rastro_processamento = list(input())
        numero_processos = int(input())
        soma = 0

        auxiliar = []
        while (len(rastro_processamento) > 0):
            operacao = rastro_processamento.pop(0)
            if operacao == 'W':
                soma += 1
                if len(auxiliar) > 0:
                    soma += 1
                    auxiliar = []
            else:
                auxiliar.append(operacao)
                if len(auxiliar) == numero_processos:
                    soma += 1
                    auxiliar = []
                    
        if (len(auxiliar) > 0):
            soma += 1
        print(soma)
    
    except EOFError:
        break;