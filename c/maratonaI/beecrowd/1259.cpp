#include <bits/stdc++.h>

int main(){
	int N = 0;

	scanf("%d", &N);
	
	int vet_o[N];
	int n_par = 0;
	int n_impar = 0;
	int vet_r[N];

	for(int i = 0; i < N; i ++) {
		int valor = 0;
		scanf("%d", &valor);
		if (valor % 2 == 0) {
			n_par++;	
		}
		else{
			n_impar++;
		}
		vet_o[i] = valor;
	}

	int vet_par[n_par];
	int vet_impar[n_impar];
	int j = 0;
	int k = 0;

	for(int i = 0; i < N; i++){
		if(vet_o[i] % 2 == 0){
			vet_par[j] = vet_o[i];
			j++;
		}	
		else {
			vet_impar[k] = vet_o[i];
			k++;
		}
	}

	int menor = 0;
	// Bubble sort crescente
	for(int a = 0; a < n_par; a++){
		for(int i = 0; i < n_par - 1 ; i ++){
			if (vet_par[i] > vet_par[i+1]) {
				int swap = vet_par[i];
				vet_par[i] = vet_par[i+1];
				vet_par[i+1] = swap;
			}
		}
	}
	//Bubble sort decrescente
	for(int a = 0; a < n_impar; a++){
		for(int i = 0; i < n_impar - 1 ; i ++){
			if (vet_impar[i] < vet_impar[i+1]) {
				int swap = vet_impar[i];
				vet_impar[i] = vet_impar[i+1];
				vet_impar[i+1] = swap;
			}
		}
	}
	for (int i = 0; i < n_par; i++) {
		printf("%d\n", vet_par[i]);
	}

	for (int i = 0; i < n_impar; i++) {
		printf("%d\n", vet_impar[i]);
	}

	return 0;
}
