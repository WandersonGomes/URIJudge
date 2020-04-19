#PROBLEM 1876
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1876
#PYTHON 3
while True:
    try:
        cipo = list(input())

        achou_x = False
        aux_folhas_normais = [] 
        maior_filete = 0

        quantidade_folhas_normais = 0
        for folha in cipo:
            if folha != 'x':
                aux_folhas_normais.append(folha)
            else:
                quantidade_folhas_normais = len(aux_folhas_normais)
                aux_folhas_normais = []

                if achou_x:
                    quantidade_folhas_normais = int(quantidade_folhas_normais/2)
                    if quantidade_folhas_normais > maior_filete:
                        maior_filete = quantidade_folhas_normais
                else:
                    achou_x = True
                    if quantidade_folhas_normais > maior_filete:
                        maior_filete = quantidade_folhas_normais                


        #as folhas normais do final do cipo
        quantidade_folhas_normais = len(aux_folhas_normais)
        if quantidade_folhas_normais > maior_filete:
            print(quantidade_folhas_normais)
        else:
            print(maior_filete)

    except EOFError:
        break