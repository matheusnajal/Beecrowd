c = int(input())

total = 0
coelho = 0
rato = 0
sapo = 0

for i in range(c):
    quantia, tipo = input().split()
    quantia = int(quantia)

    total += quantia
    if tipo == "C":
        coelho += quantia
    elif tipo == "R":
        rato += quantia
    elif tipo == "S":
        sapo += quantia

porcentagem_coelho = (coelho * 100) / total
porcentagem_rato = (rato * 100) / total
porcentagem_sapo = (sapo * 100) / total

print(f"Total: {total} cobaias\nTotal de coelhos: {coelho}\nTotal de ratos: {rato}\nTotal de sapos: {sapo}")
print(f"Percentual de coelhos: {porcentagem_coelho:.2f} %")
print(f"Percentual de ratos: {porcentagem_rato:.2f} %")
print(f"Percentual de sapos: {porcentagem_sapo:.2f} %")