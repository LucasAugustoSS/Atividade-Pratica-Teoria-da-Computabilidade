#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, n, i, c;
	scanf("%d", &n);
	
	R1:
		if (n <= 0) {
			goto R2;
		} else {
			goto R3;
		}
	R2:
		printf("Erro");
		goto R12;
	R3:
		a = 0;
		goto R4;
	R4:
		b = 1;
		goto R5;
	R5:
		i = 0;
		goto R6;
	R6:
		if (i < n) {
			goto R7;
		} else {
			goto R12;
		}
	R7:
		printf("%d ", a);
		goto R8;
	R8:
		c = b;
		goto R9;
	R9:
		b = a + b;
		goto R10;
	R10:
		a = c;
		goto R11;
	R11:
		i = i + 1;
		goto R6;
	R12:
		return 0;
}



/*
R1: se n <= 0 vá_para R2 senão vá_para R3
R2: escreva("Erro") vá_para R12
R3: faça a = 0 vá_para R4
R4: faça b = 1 vá_para R5
R5: faça i = 0 vá_para R6
R6: se i < n vá_para R7 senão vá_para R12
R7: escreva(a) vá_para R8
R8: faça c = b vá_para R9
R9: faça b = a + b vá_para R10
R10: faça a = c vá_para R11
R11: faça i = i + 1 vá_para R6
R12: parada
*/