#include <bits/stdc++.h>

int main(){

	int n = 0;
	char A[1000];
	char B[1000];

	scanf("%d", &n);
	getchar();

	while (n > 0) {
		int conclusao = 0; 
		scanf("%s %s", A, B);
		getchar();

		int tamanho_A = strlen(A) - 1;
		int tamanho_B = strlen(B) - 1;

                for (int i = tamanho_A ; i >= tamanho_A - tamanho_B; i--) {
                	if (B[tamanho_B]  != A[i]) {
				conclusao = 1;
                    		printf("nao encaixa\n");
				break;
                  	}
			tamanho_B--;
                }

		if(conclusao == 0){
			printf("encaixa\n");
		}

                n--;
        }

	return 0;
}
