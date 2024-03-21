def tempo_minimo(A1, A2, A3):
    tempo_no_primeiro_andar = A2 * 2 + A3 * 4
    tempo_no_segundo_andar = A1 * 2 + A3 * 2
    tempo_no_terceiro_andar = A1 * 4 + A2 * 2

    return min(tempo_no_primeiro_andar, tempo_no_segundo_andar, tempo_no_terceiro_andar)


A1 = int(input())
A2 = int(input())
A3 = int(input())

print(tempo_minimo(A1, A2, A3))