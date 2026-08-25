#include <bits/stdc++.h>

#define M 1000

int main(){
	int n = 0;
	
	char senha[M];
	char passada1[M];
	char passada2[M];
	char passada3[M];

	scanf("%d", &n);
	getchar();

	for(int j = 0; j < n; j++){
		memset(senha, 0, sizeof(senha));
		memset(passada1, 0, sizeof(passada1));
		memset(passada2, 0, sizeof(passada2));
		memset(passada3, 0, sizeof(passada3));

		scanf("%999[^\n]", senha);
		getchar();
		unsigned long tamanho = strlen(senha);

		for(int i = 0; i < tamanho; i++){
			if(((senha[i] >= 65) && (senha[i] <= 90)) || ((senha[i] >= 97) && (senha[i] <= 122))){
				passada1[i] = senha[i] + 3;

			}
			else{
				passada1[i] = senha[i];
			}
		}

		for(int i = 0; i < tamanho; i++){
			passada2[i] = passada1[(tamanho - 1) - i];
		}
	
		int metade = tamanho/2;

		for(int i = 0; i < tamanho; i++){
			if(i >= metade){
				passada3[i] = passada2[i] - 1;

			}
			else{
				passada3[i] = passada2[i];
			}
		}
	//printf("%s\n", passada1);
	//printf("%s\n", passada2);
		printf("%s\n", passada3);
	//printf("%d\n", metade);
	}
		return 0;
}
