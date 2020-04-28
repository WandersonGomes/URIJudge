#PROBLEM 2790
#link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2790
#PYTHON 3

#MAX
MAX = 100001

#FUNCAO PARA RETORNAR A QUANTIDADE MINIMA DE MOVIMENTOS
def quantidadeMinimaMovimentos(dados):
    valores_iniciais_faces = set(dados)

    resultado = MAX

    for valor in valores_iniciais_faces:
        tmp = 0
        for face in dados:
            if (valor+face) == 7:
                tmp += 2
            elif (valor != face):
                tmp += 1
        
        if tmp < resultado:
            resultado = tmp
    
    return resultado

#PROGRAMA PRINCIPAL
input()
face_iniciais_dados = input().split(" ")
face_iniciais_dados = [int(c) for c in face_iniciais_dados]

print(quantidadeMinimaMovimentos(face_iniciais_dados))