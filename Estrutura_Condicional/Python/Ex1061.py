from datetime import datetime

entrada_inicio = input().split()
entrada_inicio_dia = int(entrada_inicio[1])
entrada_inicio_tempo = list(map(int, input().split(' : ')))
entrada_fim = input().split()
entrada_fim_dia = int(entrada_fim[1])
entrada_fim_tempo = list(map(int, input().split(' : ')))

inicio = datetime(2024, 4, entrada_inicio_dia, *entrada_inicio_tempo)
fim = datetime(2024, 4, entrada_fim_dia, *entrada_fim_tempo)

diferenca = fim - inicio
dias = diferenca.days
segundos = diferenca.seconds
horas = segundos // 3600
minutos = (segundos % 3600) // 60
segundos = segundos % 60

print(f'{dias} dia(s)')
print(f'{horas} hora(s)')
print(f'{minutos} minuto(s)')
print(f'{segundos} segundo(s)')