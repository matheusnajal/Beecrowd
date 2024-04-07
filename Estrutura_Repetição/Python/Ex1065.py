pares = 0

for i in range(0, 5):
    valor = float(input())
    if valor % 2 == 0:
        pares += 1

print(f"{pares} valores pares")