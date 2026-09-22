#include <stdio.h>

int main(){
	int a,b,c;
	printf("Escreva o primeiro número: \n");
	scanf("%d", &a);

	printf("Escreva o segundo número: \n");
	scanf("%d", &b);

	printf("Escreva o terceiro número: \n");
	scanf("%d", &c);

	int soma = a + b + c;

	printf("A soma dos três números é: %d", soma);

	return 0;
}
