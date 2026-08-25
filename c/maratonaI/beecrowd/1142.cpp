#include <bits/stdc++.h>

int main(){

	int n = 0;
	int j = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		printf("%d ", j + 1);
		printf("%d ", j + 2);
		printf("%d ", j + 3);
		printf("PUM\n");
		j += 4;
		
	}
	return 0;
}
