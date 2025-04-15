#include <stdio.h>

int main(){
    int lado_1, lado_2, lado_3;

    scanf("%d %d %d", &lado_1, &lado_2, &lado_3);

    if (lado_1+lado_2>lado_3 && lado_1+lado_3>lado_2 && lado_2+lado_3>lado_1){
        printf("É um triângulo válido\n");
    }

    else printf("Não é um triângulo válido\n");

    return 0;
}