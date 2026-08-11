#include <bits/stdc++.h>

int main(){

	int N = 0;
	int M = 0;

	scanf("%d %d", &N, &M);

	while ((N != 0) && (M != 0)) {
		int falsos = 0;
		if (N < M) {
			falsos = M - N;
		}
		else{
			//Inicializar o vetor com bilhetes esperados		
			int vetIdeal[N];
			for(int i = 0; i < N; i++){
				vetIdeal[i] = i + 1;
			}
			//Inicializar o vetor com todos os bilhetes recebidos
			int vetReal[M];
			for(int i = 0; i < M; i++){
				scanf("%d", &vetReal[i]);
			}

			for(int i = 0; i < M; i++){
				int iguais = 0;
				for(int j = 0; j < N; j++){
					if (vetReal[i] == vetIdeal[j]) {
						iguais++;
					}
				}
				if (iguais != 1) {
					falsos++;
				
				}

			}
		}

		printf("%d\n", falsos);

		scanf("%d %d", &N, &M);
	}

	return 0;
}
