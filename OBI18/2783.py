def figurinhas_faltando(N, C, M, carimbadas, compradas):
    compradas_set = set(compradas)
    
    faltando = 0
    for carimbada in carimbadas:
        if carimbada not in compradas_set:
            faltando += 1
            
    return faltando

N, C, M = map(int, input().split())
carimbadas = list(map(int, input().split()))
compradas = list(map(int, input().split()))

print(figurinhas_faltando(N, C, M, carimbadas, compradas))