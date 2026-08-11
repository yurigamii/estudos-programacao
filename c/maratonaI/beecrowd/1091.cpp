#include <bits/stdc++.h>

int main(){

	int k = 0; int n = 0; int m = 0; int x = 0; int y = 0;

	scanf("%d", &k);
	while (k != 0) {

		scanf("%d %d", &n, &m);

		for(int i = 0; i < k; i++){

			scanf("%d %d", &x, &y);

			if(((n == x) && (m == y)) || ((x == n) && (y != m)) || ((x != n) && (y == m))){
				printf("divisa\n");	
			}
			else if ((x > n) && (y > m)) {
				printf("NE\n");
			}
			else if ((x < n) && (y > m)) {
				printf("NO\n");
			}
			else if((x > n) && (y < m)){
				printf("SE\n");
			}
			else if((x < n) && (y < m)){
				printf("SO\n");
			}

		}

		scanf("%d",&k);

	}

	return 0;
}
