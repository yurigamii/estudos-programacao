#include <bits/stdc++.h>

int main(){

	int x1 = 0;int y1 = 0;int x2 = 0;int y2 = 0;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	if((x1 == x2) && (y1 == y2)){
		printf("0");
	}

	else if((((x1 == x2) && (y1 != y2)) && ((x1 != x2) && (y1 == y2))) || (abs(x2 - x1) == abs(y2 - y1))){
		printf("1");	
	}
	
	else{
		printf("2");
	}

	return 0;
}
