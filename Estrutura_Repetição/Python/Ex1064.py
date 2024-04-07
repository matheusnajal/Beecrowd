positivos = 0
media = 0

for i in range(0, 6):
    valor = float(input())
    if valor >= 0:
        media += valor / 4
        positivos += 1

print(f"{positivos} valores positivos\n{media:.1f}")