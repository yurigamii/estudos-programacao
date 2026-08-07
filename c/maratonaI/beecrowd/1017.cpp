#include <bits/stdc++.h>

int main(){
	int autonomia = 12;
	float tempo, vm, litros_necessarios;

	scanf("%f %f", &tempo, &vm);
	
	litros_necessarios = (tempo * vm) / autonomia;

	printf("%.3f\n", litros_necessarios);
	
	return 0;
}
