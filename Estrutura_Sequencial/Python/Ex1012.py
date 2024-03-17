A, B, C = map(float, input().split())
Pi = 3.14159

print(f"TRIANGULO: {(A * C) / 2:.3f}\nCIRCULO: {Pi * pow(C, 2):.3f}\nTRAPEZIO: {((A + B) * C) / 2:.3f}\nQUADRADO: {B * B:.3f}\nRETANGULO: {A * B:.3f}")