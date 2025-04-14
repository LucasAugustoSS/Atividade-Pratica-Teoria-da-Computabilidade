a = 0
b = 1

n = int(input("Digite a quantidade de elementos ppara a sequencia de Fribonaci: "))

if n <= 0:
    print("Erro")
else:
    i = 0
    while i < n:
        print(a, end=' ')
        c = b
        b = a + b
        a = c
        i += 1
