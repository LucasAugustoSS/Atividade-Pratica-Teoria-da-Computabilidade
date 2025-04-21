n = int(input())

if n <= 0:
    print("Erro")
else:
    a = 0
    b = 1
    i = 0
    while i < n:
        print(a, end=" ")
        c = b
        b = a + b
        a = c
        i = i + 1



# se (n <= 0) faça
#     escreva("Erro");
# senão faça
#     a = 0;
#     b = 1;
#     i = 0;
#     enquanto(i < n) faça
#         escreva(a);
#         c = b;
#         b = a + b;
#         a = c;
#         i = i + 1;
#     fim enquanto;
# fim se;