v = int(input())

a = []
for i in range(1, 100):
    n = int(input())

    a.append(n)
    

valor = max(a)
index = a.index(valor) + 2

print(valor)
print(index)