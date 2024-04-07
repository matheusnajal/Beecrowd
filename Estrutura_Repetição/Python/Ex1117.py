media: float = 0
nota_valida: int = 0
while True:
    nota = float(input())

    if nota >= 0 and nota <= 10:
        nota_valida += 1
        media += nota
        if nota_valida == 2:
            print(f"media = {media/2:.2f}")
            break
    else:
        print("nota invalida")