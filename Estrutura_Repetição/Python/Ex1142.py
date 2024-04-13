n = int(input())
pum = 0

for i in range(1, n + 1):
    pum += 3
    print(f"{pum - 2} {pum - 1} {pum} PUM")
    pum += 1