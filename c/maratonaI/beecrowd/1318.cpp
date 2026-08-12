#include <bits/stdc++.h>

int main(){

	int N = 0;
	int M = 0;

	scanf("%d %d", &N, &M);

	while ((N != 0) && (M !=0)) {
		
		int bilhetes[N];

		for(int i = 0; i < N; i++){
			bilhetes[i] = 0;
		}
		int leitura = 0;
		int contador = 0;

		for(int i = 0; i < M; i++){
			scanf("%d", &leitura);
			bilhetes[leitura - 1] += 1;
		}

		for(int i = 0; i < N; i++){
			if (bilhetes[i] > 1) {
				contador++;
			}
		}
		
		printf("%d\n", contador);
		scanf("%d %d", &N, &M);
	}

	return 0;
}
