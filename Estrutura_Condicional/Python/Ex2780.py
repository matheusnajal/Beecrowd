def calcular_pontuacao(distancia):
    if distancia <= 800:
        return 1
    elif distancia <= 1400:
        return 2
    else:
        return 3

distancia = int(input())

pontuacao = calcular_pontuacao(distancia)

print(pontuacao)