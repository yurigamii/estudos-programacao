#include <bits/stdc++.h>

#define M 1000

int main(){
	int n = 0;
	
	char senha[M];
	char passada1[M];
	char passada2[M];
	char passada3[M];

	//scanf("%d", &n);
	memset(passada1, 0, sizeof(passada1));
	fgets(senha, M, stdin);
	unsigned long tamanho = strlen(senha);

	
	for(int i = 0; i < tamanho; i++){
		passada1[i] = senha[i] + 3;
	}

	printf("%s", passada1);

	return 0;
}
