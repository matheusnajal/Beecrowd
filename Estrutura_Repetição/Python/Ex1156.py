d = 2
s = 1

for i in range(3, 39, 2):
    s += (i / d)
    d *= 2

print(f"{s:.2f}")