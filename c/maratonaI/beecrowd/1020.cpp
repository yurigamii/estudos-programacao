#include <bits/stdc++.h>

int ano(int n){
	int a = n % 365;
	int b = n - a;
	int c = b / 365;
	return c;
}

int mes(int n){
	int a = n % 365;	
	int b = a % 30;
	int c = a - b;
	int d = a / 30;
	
	return d;
}

int dia(int n){
	int a = n % 365;
	int b = a % 30;

	return b;
}
int main(){

	int qntd_dias = 0;
	int anos = 0;
	int meses = 0;
	int dias = 0;

	scanf("%d", &qntd_dias);

	anos = ano(qntd_dias);
	meses = mes(qntd_dias);
	dias = dia(qntd_dias);
	
	printf("%d ano(s)\n", anos);
	printf("%d mese(s)\n", meses);
	printf("%d dia(s)\n", dias);

	return 0;
}
