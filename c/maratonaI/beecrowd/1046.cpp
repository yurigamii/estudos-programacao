#include <bits/stdc++.h>

int main(){
	
	int inicio = 0;
	int fim = 0;
	int duracao = 0;

	scanf("%d %d", &inicio, &fim);

	if(inicio == fim){
		duracao = 24;
		printf("O JOGO DUROU %d HORA(S)\n", duracao); 
	}
	else{
		while(inicio != fim){
			inicio++;
			duracao++;
			if(inicio > 23){
				inicio = 0;	
			}
		}
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	
	return 0;
}
