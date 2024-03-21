a, b, c = map(int, input().split())

if a >= b + c or b >= a + c or c >= a + b:
    print("Invalido")
else:
    if a**2 == b**2 + c**2 or b**2 == a**2 + c**2 or c**2 == a**2 + b**2:
        retangulo = "S"
    else:
        retangulo = "N"
    
    if a == b == c:
        print("Valido-Equilatero")
    elif a == b or a == c or b == c:
        print("Valido-Isoceles")
    else:
        print("Valido-Escaleno")
    
    print("Retangulo:", retangulo)