media = 0
count = 0
while True:
    idade = int(input())

    if idade < 0:
        break
    else:
        count += 1
        media += idade

print(f"{(media / count):.2f}")