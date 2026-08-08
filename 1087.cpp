#include <bits/stdc++.h>

int main(){

	int x1;
	int y1;
	int x2;
	int y2;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	if((x1 == x2) && (y1 == y2)){
		printf("0");
	}

	else if((x1 == x2) && (y1 != y2)){
		printf("1");	
	}
	
	else if((x1 != x2) && (y1 == y2)){
		printf("1");
	}
	
	else if((abs(x2) == abs(y2))){
		printf("1");
	}

	else{
		printf("2");
	}

	return 0;
}
