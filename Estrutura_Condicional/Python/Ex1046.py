hora_inicio, hora_fim = map(int, input().split())

if hora_inicio < hora_fim:
    duracao = hora_fim - hora_inicio
else:
    duracao = 24 - hora_inicio + hora_fim

print("O JOGO DUROU", duracao, "HORA(S)")