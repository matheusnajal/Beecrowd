x = int(input())
y = int(input())

menor = min(x, y)
maior = max(x, y)

if menor % 2 == 0:
    menor += 1
elif menor % 2 != 0:
    menor += 2

soma = 0
for i in range(menor, maior, 2):
    soma += i
print(soma)