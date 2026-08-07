#include <bits/stdc++.h>

int main(){
	//float notas[6] = {100, 50, 20, 10 ,5 , 2};
	//float moedas[6] = {1.0, 0.50, 0.25, 0.05, 0.01};
	
	float valor;
	int nota100, nota50, nota20, nota10, nota5, nota2;
	int moeda1, moeda05, moeda025, moeda01, moeda005, moeda001;

	scanf("%f", &valor);

	while(valor >= 100){
		valor = valor - 100;
		nota100++;
	}

	while(valor >= 50){
		valor = valor - 50;
		nota50++;
	}

	while(valor >= 20){
		valor = valor - 20;
		nota20++;
	}

	while(valor >= 10){
		valor = valor - 10;
		nota10++;
	}

	while(valor >= 5){
		valor = valor - 5;
		nota5++;
	}

	while(valor >= 2){
		valor = valor - 2;
		nota2++;
	}

	while(valor >= 1){
		valor = valor - 1;
		moeda1++;
	}

	while(valor >= 0.50){
		valor = valor - 0.50;
		moeda05++;
	}

	while(valor >= 0.25){
		valor = valor - 0.25;
		moeda025++;
	}

	while(valor >= 0.10){
		valor = valor - 0.10;
		moeda01++;
	}

	while(valor >= 0.05){
		valor = valor - 0.05;
		moeda005++;
	}

	while(valor > 0.0){
		valor = valor - 0.01;
		moeda001++;
	}
	
	printf("NOTAS:\n");

	printf("%d nota(s) de R$ 100.00\n", nota100);

	printf("%d nota(s) de R$ 50.00\n", nota50);

	printf("%d nota(s) de R$ 20.00\n", nota20);

	printf("%d nota(s) de R$ 10.00\n", nota10);

	printf("%d nota(s) de R$ 5.00\n", nota5);

	printf("%d nota(s) de R$ 2.00\n", nota2);

	printf("%d moeda(s) de R$ 1.00\n", moeda1);

	printf("%d moeda(s) de R$ 0.50\n", moeda05);

	printf("%d moeda(s) de R$ 0.25\n", moeda025);

	printf("%d moeda(s) de R$ 0.10\n", moeda01);

	printf("%d moeda(s) de R$ 0.05\n", moeda005);

	printf("%d moeda(s) de R$ 0.01\n", moeda001);

	return 0;
}
