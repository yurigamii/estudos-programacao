#include <stdio.h>

int main() {
	int x = 0;
	scanf("%d", &x);

	int sucessor = x + 1;
	int antecessor = x - 1;

	printf("O numero é: %d\n O seu antecessor é: %d\n O seu sucessor é: %d\n", x, antecessor, sucessor);

	return 0;

}
