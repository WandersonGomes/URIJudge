#PROBLEM 1574
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1574
#PYTHON 3
def realizaInstrucao(instrucao, historico):
    if instrucao == "LEFT":
        return -1
    if instrucao == "RIGHT":
        return 1
    
    tmp = int(instrucao.split(" ")[2])
    return realizaInstrucao(historico[tmp-1], historico)

#PROGRAMA PRINCIPAL
quantidade_testes = int(input())

for i in range(0, quantidade_testes):
    quantidade_instrucoes = int(input())
    instrucoes = []
    for j in range(0, quantidade_instrucoes):
        instrucoes.append(input())
    
    posicao = 0
    for j in range(0, quantidade_instrucoes):
        posicao += realizaInstrucao(instrucoes[j], instrucoes)
    
    print(posicao)