idade = int(input())

ano = idade // 365
idade %= 365

mes = idade // 30
dias = idade % 30



print(f"{ano} ano(s)\n{mes} mes(es)\n{dias} dia(s)")