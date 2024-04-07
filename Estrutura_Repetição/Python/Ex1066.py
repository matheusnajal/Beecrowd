par = 0
impar = 0
positivos = 0
negativos = 0

for i in range(5):
    n = int(input())
    if n % 2 == 0:
        par += 1
    else:
        impar += 1
    if n > 0:
        positivos += 1
    elif n < 0:
        negativos += 1
print(f"""{par} valor(es) par(es)
{impar} valor(es) impar(es)
{positivos} valor(es) positivo(s)
{negativos} valores(es) negativos(s)""")
par = 0
impar = 0
positivos = 0
negativos = 0

for i in range(5):
    n = int(input())
    if n % 2 == 0:
        par += 1
    else:
        impar += 1
    if n > 0:
        positivos += 1
    elif n < 0:
        negativos += 1
print(f"""{par} valor(es) par(es)
{impar} valor(es) impar(es)
{positivos} valor(es) positivo(s)
{negativos} valor(es) negativo(s)""")