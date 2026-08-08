#include <bits/stdc++.h>

int main(){
	
	int inicio =0;
	int fim = 0;
	int duracao = 0;
	scanf("%d %d", &inicio, &fim);

	if(inicio > fim){

		duracao = (24 - inicio) + fim;
	}
	else if(inicio == fim){
		duracao = 24;
	}
	else {
		duracao = fim - inicio;
	}

	printf("%d horas", duracao);


	return 0;
}
