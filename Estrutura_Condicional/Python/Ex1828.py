T = int(input())

regras = {
    ("tesoura", "papel"): "Bazinga!",
    ("papel", "pedra"): "Bazinga!",
    ("pedra", "lagarto"): "Bazinga!",
    ("lagarto", "Spock"): "Bazinga!",
    ("Spock", "tesoura"): "Bazinga!",
    ("tesoura", "lagarto"): "Bazinga!",
    ("lagarto", "papel"): "Bazinga!",
    ("papel", "Spock"): "Bazinga!",
    ("Spock", "pedra"): "Bazinga!",
    ("pedra", "tesoura"): "Bazinga!",
    ("tesoura", "Spock"): "Raj trapaceou!",
    ("Spock", "papel"): "Raj trapaceou!",
    ("papel", "tesoura"): "Raj trapaceou!",
    ("tesoura", "pedra"): "Raj trapaceou!",
    ("pedra", "papel"): "Raj trapaceou!",
    ("papel", "lagarto"): "Raj trapaceou!",
    ("lagarto", "pedra"): "Raj trapaceou!",
    ("pedra", "Spock"): "Raj trapaceou!",
    ("Spock", "lagarto"): "Raj trapaceou!",
    ("lagarto", "tesoura"): "Raj trapaceou!",
}

for t in range(1, T+1):
    escolha_sheldon, escolha_raj = input().split()
    if escolha_sheldon == escolha_raj:
        print(f"Caso #{t}: De novo!")
    else:
        resultado = regras.get((escolha_sheldon, escolha_raj))
        print(f"Caso #{t}: {resultado}")