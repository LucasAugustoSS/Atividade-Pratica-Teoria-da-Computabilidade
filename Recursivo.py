def R(n):
    if n <= 0:
        print("Erro")
        return -1
    else:
        a = 0
        b = 1
        i = 0
        return S(n, a, b, i)

def S(n, a, b, i):
    if i < n:
        return T(n, a, b, i)
    else:
        print(a)
        return a
    
def T(n, a, b, i):
    c = b
    b = a + b
    a = c
    i = i + 1
    return S(n, a, b, i)

n = int(input())
R(n)



# P é R; S; T onde:

#   R def (se n <= 0 então (escreva("Erro"); ✓) senão a = 0; b = 1; i = 0; S)
#   S def (se i < n então T senão escreva(a); ✓)
#   T def (c = b; b = a + b; a = c; i = i + 1; S)