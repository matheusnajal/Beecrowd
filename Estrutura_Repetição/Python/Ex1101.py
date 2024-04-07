while True:
    x, y = map(int, input().split())
    menor = min(x, y)
    maior = max(x, y)

    if menor <= 0 or maior <= 0:
        break
    else:
        soma = 0
        for i in range(menor, maior + 1):
            soma += i
            print(i, end= " ")
        print(f"Sum={soma}")