#include <bits/stdc++.h>

using namespace std;

int main(){

	char caso[4];
	int n = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){

        	int resposta = 0;
        	int primeiro_num = 0;
        	int segundo_num = 0;
        
        	scanf("%s", caso);

        	primeiro_num = caso[0] - '0';
        	segundo_num = caso[2] - '0';

        	if (primeiro_num == segundo_num) {
            		resposta = primeiro_num * segundo_num;
            		printf("%d\n", resposta);
        	}
        	else if (caso[1] >= 'A' && caso[1] <= 'Z') {
            		resposta = segundo_num - primeiro_num;    
            		printf("%d\n", resposta);
        	}
        	else if (caso[1] >= 'a' && caso[1] <= 'z') {
            		resposta = primeiro_num + segundo_num;    
            	printf("%d\n", resposta);
        }
    }
    
    return 0;
}
