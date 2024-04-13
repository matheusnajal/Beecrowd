x = int(input())
y = int(input())
soma = 0

maior = max(x, y)
menor = min(x, y)

for i in range(menor, maior + 1):
    if i % 13 != 0:
        soma += i
print(soma)