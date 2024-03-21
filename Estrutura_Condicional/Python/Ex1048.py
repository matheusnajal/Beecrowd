salario = float(input())
salarioF = 0
reajuste = 0

if 0 <= salario <= 400:
    reajuste = salario * 0.15
    salarioF = salario + reajuste
    print(f"Novo salario: {salarioF:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 15 %")
elif salario <= 800:
    reajuste = salario * 0.12
    salarioF = salario + reajuste
    print(f"Novo salario: {salarioF:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 12 %")
elif salario <= 1200:
    reajuste = salario * 0.10
    salarioF = salario + reajuste
    print(f"Novo salario: {salarioF:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 10 %")
elif salario <= 2000:
    reajuste = salario * 0.07
    salarioF = salario + reajuste
    print(f"Novo salario: {salarioF:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 7 %")
else:
    reajuste = salario * 0.04
    salarioF = salario + reajuste
    print(f"Novo salario: {salarioF:.2f}")
    print(f"Reajuste ganho: {reajuste:.2f}")
    print("Em percentual: 4 %")