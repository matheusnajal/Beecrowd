al = 0
gas = 0
die = 0

while True:
    tipo = int(input())

    if tipo == 1:
        al += 1
    elif tipo == 2:
        gas += 1
    elif tipo == 3:
        die += 1
    elif tipo == 4:
        break

print(f'''MUITO OBRIGADO
Alcool: {al}
Gasolina: {gas}
Diesel: {die}''')