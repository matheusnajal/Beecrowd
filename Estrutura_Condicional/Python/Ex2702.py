disponiveis = list(map(int, input().split()))
requisitadas = list(map(int, input().split()))

nao_atendidos = 0
for i in range(3):
    nao_atendidos += max(0, requisitadas[i] - disponiveis[i])

print(nao_atendidos)