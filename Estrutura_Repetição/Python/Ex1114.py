senha = 2002

while True:
    nova_senha = int(input())

    if senha == nova_senha:
        print("Acesso Permitido")
        break
    else:
        print("Senha Invalida")