quant = int(input())


dentro = 0
fora = 0
for i in range(quant):
    v = int(input())

    if 10 <= v <= 20:
        dentro += 1
    else:
        fora += 1

print(f"""{dentro} in
{fora} out""")