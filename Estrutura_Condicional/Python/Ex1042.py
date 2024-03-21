a, b, c = map(int, input().split())

menor = min(a, b, c)
meio = (a + b + c) - menor - max(a, b, c)
maior = max(a, b, c)

print(menor)
print(meio)
print(f"{maior}\n")

print(a)
print(b)
print(c)