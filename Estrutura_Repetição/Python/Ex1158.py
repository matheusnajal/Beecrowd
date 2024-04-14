def soma(x, y):
    soma = 0
    contador = 0

    while contador < y:
        if x % 2 != 0:
            soma += x
            contador += 1
        x += 1
    return soma

n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    resultado = soma(x, y)
    print(resultado)