n = int(input())

for i in range(0, n):
    soma: int = 0
    x, y = map(int, input().split())
    menor = min(x, y)
    maior = max(x, y)
    for j in range(menor + 1, maior):
        if j % 2 != 0:
            soma += j
    print(soma)