#include <bits/stdc++.h>

int rafael(int x, int y){
	int func = ((3*x)*(3*x)) + (y * y);
	return func;
}

int beto(int x, int y){
	int func = (2 * (x * x)) + ((5 * y) * (5 * y));
	return func;
}

int carlos(int x, int y){
	int func = (-100 * x) + (y*y*y);
	return func;
}

int main(){
	int n = 0;
	int x = 0;
	int y = 0;

	scanf("%d", &n);

	while(n > 0){
		scanf("%d %d", &x, &y);
		int rafa = rafael(x, y);
		int bet = beto(x, y);
		int carlin = carlos(x, y);
		
		if ((rafa > bet) && (rafa > carlin)) {
			printf("Rafael ganhou\n");
		}
		if ((bet > rafa) && (bet > carlin)) {
			printf("Beto ganhou\n");
		}
		if ((carlin > rafa) && (carlin > bet)){
			printf("Carlos ganhou\n");
		}
		n--;
	}
	return 0;
}
