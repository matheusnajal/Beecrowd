hora_inicio, minuto_inicio, hora_fim, minuto_fim = map(int, input().split())

inicio_em_minutos = hora_inicio * 60 + minuto_inicio
fim_em_minutos = hora_fim * 60 + minuto_fim

duracao_em_minutos = fim_em_minutos - inicio_em_minutos

if duracao_em_minutos <= 0:
    duracao_em_minutos += 24 * 60 

duracao_horas = duracao_em_minutos // 60
duracao_minutos = duracao_em_minutos % 60

print("O JOGO DUROU", duracao_horas, "HORA(S) E", duracao_minutos, "MINUTO(S)")