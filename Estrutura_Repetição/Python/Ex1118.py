while True:
    nota1 = float(input())
    while nota1 < 0 or nota1 > 10:
        print("nota invalida")
        nota1 = float(input())

    nota2 = float(input())
    while nota2 < 0 or nota2 > 10:
        print("nota invalida")
        nota2 = float(input())

    media = (nota1 + nota2) / 2
    print("media = {:.2f}".format(media))

    opcao = 0
    while opcao != 1 and opcao != 2:
        print("novo calculo (1-sim 2-nao)")
        opcao = int(input())

    if opcao == 2:
        break