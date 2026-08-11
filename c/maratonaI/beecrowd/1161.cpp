#include <bits/stdc++.h>

int main(){

	int M = 0; int N = 0;
	long long int fatorial_M = 1; 
	long long int fatorial_N = 1;

	while(scanf("%d %d", &M, &N) != EOF){
		

		for(int i = M; i > 0; i--){
			fatorial_M = fatorial_M * i;
		}

		for(int i = N; i > 0; i--){
			fatorial_N = fatorial_N * i;
		}

		long long int soma = fatorial_M + fatorial_N;

		printf("%lld\n", soma);
		fatorial_M = 1;
		fatorial_N = 1;
	}

	return 0;
}
