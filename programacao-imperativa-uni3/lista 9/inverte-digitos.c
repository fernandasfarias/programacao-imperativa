#include <stdio.h>

void inverte(int num){
    while(num != 0){
        int resto = num%10;
        printf("[%d]", resto);
        num = num/10;
    }
    printf("\n");
}

int main(){
    int numero;

    while (1){
        scanf("%d", &numero);
        if (numero == 0) break;
        inverte(numero);
    }

    return 0;
}