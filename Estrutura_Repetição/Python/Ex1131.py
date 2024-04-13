inter_vitorias = 0
gremio_vitorias = 0
empates = 0
grenais = 0

while True:
    gols_inter, gols_gremio = map(int, input().split())
    grenais += 1

    if gols_inter > gols_gremio:
        inter_vitorias += 1
    elif gols_gremio > gols_inter:
        gremio_vitorias += 1
    else:
        empates += 1

    resposta = int(input("Novo grenal (1-sim 2-nao)\n"))

    if resposta == 2:
        break

print(f"{grenais} grenais")
print(f"Inter:{inter_vitorias}")
print(f"Gremio:{gremio_vitorias}")
print(f"Empates:{empates}")

if inter_vitorias > gremio_vitorias:
    print("Inter venceu mais")
elif gremio_vitorias > inter_vitorias:
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")