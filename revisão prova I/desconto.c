#include <stdio.h>

int main(){
    float valor;

    scanf("%f", &valor);

    if (valor >= 100 && valor < 500){
        printf("O valor do produto da categoria A com 10%% de desconto: %.2f\n", valor*0.9);
    }

    else if (valor >= 500 && valor < 1000){
        printf("O valor do produto da categoria B com 15%% de desconto: %.2f\n", valor*0.85);
    }

    else if (valor >= 1000){
        printf("O valor do produto da categoria C com 20%% de desconto: %.2f\n", valor*0.8);
    }

    return 0;
}