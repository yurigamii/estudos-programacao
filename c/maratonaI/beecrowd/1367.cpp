#include <bits/stdc++.h>

int main(){

	int N = 0;
	scanf("%d", &N);

	while (N != 0) {
		char problema;
		int certos = 0;
		int tempo_t = 0;
		int tempo = 0;
		char decisao[10];
		
		for(int i = 0; i <= N; i++){
			scanf("%c %d %[^\n]%*c", &problema, &tempo, decisao);
			if (decisao[0] == 'c') {
				tempo_t = tempo_t + tempo;
				certos++;
			}
			else {
				tempo_t += 20;
			}
		}

		printf("%d %d\n", certos, tempo_t);
		scanf("%d", &N);
	}	

	return 0;
}
