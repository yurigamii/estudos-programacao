#include <bits/stdc++.h>

int main(){

	int qnt_tst = 0;

	scanf("%d", &qnt_tst);

	for(int i = 0; i < qnt_tst; i++){
		int numero = 0;
		int soma = 0;
		scanf("%d", &numero);
		for(int j = 1; j < numero; j++){
			if((numero % j)== 0){
				soma += j;
			}
			else{
				continue;
			}
		}
		if(soma == numero){
			printf("%d eh perfeito\n", numero);
		}
		else{
			printf("%d nao eh perfeito\n", numero);
		}
	}
	return 0;
}
