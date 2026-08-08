#include <bits/stdc++.h>

int main(){
	
	double valor;

	int nota100, nota50, nota20, nota10, nota5, nota2;
	nota100 = nota50 = nota20 = nota10 = nota5 = nota2 = 0;
	int moeda1, moeda050, moeda025, moeda010, moeda005, moeda001 = 0;
	moeda1 = moeda050 = moeda025 = moeda010 = moeda005 = moeda001 = 0;

	scanf("%lf", &valor);

	int meu_valor = (int)round(valor * 100);
		
	while(meu_valor >= 10000){
		meu_valor -= 10000;
		nota100++;
	}

	while(meu_valor >= 5000){
		meu_valor -= 5000;
		nota50++;
	}

	while(meu_valor >= 2000){
		meu_valor -= 2000;
		nota20++;
	}

	while(meu_valor >= 1000){
		meu_valor -= 1000;
		nota10++;
	}

	while(meu_valor >= 500){
		meu_valor -= 500;
		nota5++;
	}

	while(meu_valor >= 200){
		meu_valor -= 200;
		nota2++;
	}

	while(meu_valor >= 100){
		meu_valor -= 100;
		moeda1++;
	}

	while(meu_valor >= 50){
		meu_valor -= 50;
		moeda050++;
	}

	while(meu_valor >= 25){
		meu_valor -= 25;
		moeda025++;
	}

	while(meu_valor >= 10){
		meu_valor -= 10;
		moeda010++;
	}

	while(meu_valor >= 5){
		meu_valor -= 5;
		moeda005++;
	}

	while(meu_valor >= 1){
		meu_valor -= 1;
		moeda001++;
	}

	printf("NOTAS:\n");

	printf("%d nota(s) de R$ 100.00\n", nota100);
	printf("%d nota(s) de R$ 50.00\n", nota50);
	printf("%d nota(s) de R$ 20.00\n", nota20);
	printf("%d nota(s) de R$ 10.00\n", nota10);
	printf("%d nota(s) de R$ 5.00\n", nota5);
	printf("%d nota(s) de R$ 2.00\n", nota2);

	printf("MOEDAS:\n");

	printf("%d moeda(s) de R$ 1.00\n", moeda1);
	printf("%d moeda(s) de R$ 0.50\n", moeda050);
	printf("%d moeda(s) de R$ 0.25\n", moeda025);
	printf("%d moeda(s) de R$ 0.10\n", moeda010);
	printf("%d moeda(s) de R$ 0.05\n", moeda005);
	printf("%d moeda(s) de R$ 0.01\n", moeda001);


	return 0;
}
