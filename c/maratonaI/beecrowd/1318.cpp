#include <bits/stdc++.h>

int main(){

	int N = 0;
	int M = 0;

	scanf("%d %d", &N, &M);

	while ((N != 0) && (M !=0)) {
		int contador = 0;	
		int bilhetes[M];
		for(int i = 0; i < M; i++){
			scanf("%d", &bilhetes[i]);
		}
		for(int i = 0; i < M; i++){
			for(int j = 0; j < M; j++){
				if(bilhetes[i] == bilhetes[j]){
					contador++;
				}
			}
		}

		printf("%d", contador);	
		scanf("%d %d", &N, &M);

	}

	return 0;
}
