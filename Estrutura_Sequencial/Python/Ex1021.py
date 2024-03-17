valor = float(input())

centavos = int(valor * 100)

notas100 = centavos // 10000
centavos %= 10000

notas50 = centavos // 5000
centavos %= 5000

notas20 = centavos // 2000
centavos %= 2000

notas10 = centavos // 1000
centavos %= 1000

notas5 = centavos // 500
centavos %= 500

notas2 = centavos // 200
centavos %= 200

moedas1 = centavos // 100
centavos %= 100

moedas050 = centavos // 50
centavos %= 50

moedas025 = centavos // 25
centavos %= 25

moedas010 = centavos // 10
centavos %= 10

moedas005 = centavos // 5
centavos %= 5

moedas001 = centavos

print(f"""NOTAS:
{notas100} nota(s) de R$ 100.00
{notas50} nota(s) de R$ 50.00
{notas20} nota(s) de R$ 20.00
{notas10} nota(s) de R$ 10.00
{notas5} nota(s) de R$ 5.00
{notas2} nota(s) de R$ 2.00
MOEDAS:
{moedas1} moeda(s) de R$ 1.00
{moedas050} moeda(s) de R$ 0.50
{moedas025} moeda(s) de R$ 0.25
{moedas010} moeda(s) de R$ 0.10
{moedas005} moeda(s) de R$ 0.05
{moedas001} moeda(s) de R$ 0.01""")