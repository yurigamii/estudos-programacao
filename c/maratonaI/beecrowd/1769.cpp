#include <bits/stdc++.h>

int main() {
    char cpf[15];
    
    while (scanf("%s", cpf) != EOF) {
        int digitos[9];
        int idx = 0;
        
        for (int i = 0; i < 11; i++) {
            if (cpf[i] >= '0' && cpf[i] <= '9') {
                digitos[idx++] = cpf[i] - '0';
            }
        }
        
        int b1_lido = cpf[12] - '0';
        int b2_lido = cpf[13] - '0';
        
        int soma1 = 0;
        int soma2 = 0;
        
        for (int i = 0; i < 9; i++) {
            soma1 += digitos[i] * (i + 1);
            soma2 += digitos[i] * (9 - i);
        }
        
        int b1_calc = soma1 % 11;
        if (b1_calc == 10) {
            b1_calc = 0;
        }
        
        int b2_calc = soma2 % 11;
        if (b2_calc == 10) {
            b2_calc = 0;
        }
        
        if (b1_calc == b1_lido && b2_calc == b2_lido) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }
    
    return 0;
}
