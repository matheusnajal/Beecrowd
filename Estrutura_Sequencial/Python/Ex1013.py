a, b, c = map(int, input().split())

maior = (a + b + abs(a - b)) / 2
maiorF = (maior + c + abs(maior - c)) / 2

print(f"{maiorF:.0f} eh o maior")