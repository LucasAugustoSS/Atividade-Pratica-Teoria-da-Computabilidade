#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, n, i, c;
	
	R1:
		a = 0;
		goto R2;
	R2:
		b = 1;
		goto R3;
	R3:
		scanf("%d", &n);
		goto R4;
	R4:
		if (n <= 0) {
			goto R5;
		} else {
			goto R6;
		}
	R5:
		printf("Erro");
		goto R13;
	R6:
		i = 0;
		goto R7;
	R7:
		if (i < n) {
			goto R8;
		} else {
			goto R13;
		}
	R8:
		printf("%d ", a);
		goto R9;
	R9:
		c = b;
		goto R10;
	R10:
		b = a + b;
		goto R11;
	R11:
		a = c;
		goto R12;
	R12:
		i = i + 1;
		goto R7;
	R13:
		return 0;
}

/*
Pseudocódigo monolítico:

R1: faça a = 0 vá_para R2
R2: faça b = 1 vá_para R3
R3: leia(n) vá_para R4
R4: se n <= 0 vá_para R5 senão vá_para R6
R5: escreva(Erro) vá_para R13
R6: faça i = 0 vá_para R7
R7: se i < n vá_para R8 senão vá_para R13
R8: escreva(a) vá_para R9
R9: faça c = b vá_para R10
R10: faça b = a + b vá_para R11
R11: faça a = c vá_para R12
R12: faça i = i + 1 vá_para R7
R13: parada
*/