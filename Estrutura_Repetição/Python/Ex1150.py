def main():
    X = int(input())

    Z = int(input())
    while Z <= X:
        Z = int(input())

    soma = 0
    total = 0

    while total <= Z:
        total += X
        X += 1
        soma += 1

    print(soma)

if __name__ == "__main__":
    main()