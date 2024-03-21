import math

def calcular_raizes(a, b, c):
    delta = b**2 - 4*a*c
    
    if delta < 0 or a == 0:
        print("Impossivel calcular")
        return
    
    r1 = (-b + math.sqrt(delta)) / (2*a)
    r2 = (-b - math.sqrt(delta)) / (2*a)
    
    print(f"R1 = {r1:.5f}")
    print(f"R2 = {r2:.5f}")

a, b, c = map(float, input().split())

calcular_raizes(a, b, c)