valor = int(input())
valorT = valor

nota100 = valor // 100
valor %= 100

nota50 = valor // 50
valor %= 50

nota20 = valor // 20
valor %= 20

nota10 = valor // 10
valor %= 10

nota5 = valor // 5
valor %= 5

nota2 = valor // 2
valor %= 2

nota1 = valor

print(f"{valorT}\n{nota100} nota(s) de R$ 100,00\n{nota50} nota(s) de R$ 50,00\n{nota20} nota(s) de R$ 20,00\n{nota10} nota(s) de R$ 10,00\n{nota5} nota(s) de R$ 5,00\n{nota2} nota(s) de R$ 2,00\n{nota1} nota(s) de R$ 1,00")