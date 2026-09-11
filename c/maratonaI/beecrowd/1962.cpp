#include <bits/stdc++.h>


int main(){
	int N = 0;
	scanf("%d", &N);
	
	int ano = 2015;
	while(N > 0){
		int T = 0;
		scanf("%d", &T);
		
		int resposta = ano - T;
		
		if(resposta <= 0){
			resposta = (resposta * -1) + 1;
			printf("%d A.C.\n", resposta);

		}
		else{
			printf("%d D.C.\n", resposta);
		}

		N--;
		
	}

	return 0;
}
