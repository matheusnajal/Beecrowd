while True:
    soma = 0
    x = int(input())

    if x == 0:
        break
    elif x % 2 != 0:
        x += 1

    for i in range(x, x + 10, 2):
        soma += i
    print(soma)