peca1, npecas1, vpeca1 = map(float, input().split())
peca2, npecas2, vpeca2 = map(float, input().split())

valorP = (npecas1 * vpeca1) + (npecas2 * vpeca2)

print(f"VALOR A PAGAR: R$ {valorP:.2f}")