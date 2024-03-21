meses = {
    1: "January",
    2: "February",
    3: "March",
    4: "April",
    5: "May",
    6: "June",
    7: "July",
    8: "August",
    9: "September",
    10: "October",
    11: "November",
    12: "December"
}

mes = int(input())

if mes >= 1 and mes <= 12:
    print(meses[mes])
else:
    print("Valor inválido. Por favor, insira um número entre 1 e 12.")