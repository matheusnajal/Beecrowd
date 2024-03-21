n = int(input())

melhor_nota = 0
melhor_aluno = None

for _ in range(n):
    aluno, nota = input().split()
    nota = float(nota)
    if nota > melhor_nota:
        melhor_nota = nota
        melhor_aluno = aluno

if melhor_nota >= 8:
    print(melhor_aluno)
else:
    print("Minimum note not reached")