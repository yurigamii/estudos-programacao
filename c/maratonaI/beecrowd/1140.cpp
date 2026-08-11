#include <bits/stdc++.h>
#include <cctype>

int main(){

	char frase[2000];
	fgets(frase, 2000, stdin);
	char letra = tolower(frase[0]);


	while (frase[0] != '*') {
		int certo = 1;
		for(int i = 0; frase[i] != '\0'; i++){
			
			if ((frase[i] == ' ') && ((frase[i + 1] != letra) && (frase[i + 1] != toupper(letra)))) {
				certo = 0;
				break;
			}
		}
		if (certo == 1) {
			printf("Y\n");
		}
		else {
			printf("N\n");
		}
		fgets(frase, 2000, stdin);
		letra = tolower(frase[0]);
	}

	return 0;
}
