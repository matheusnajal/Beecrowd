def cor_canto_inferior_direito(L, C):

    if (L + C) % 2 == 0:
        return 1
    else:
        return 0

L = int(input())
C = int(input())

print(cor_canto_inferior_direito(L, C))