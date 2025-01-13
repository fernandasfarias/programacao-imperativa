#include <stdio.h>

int main(void){
    float massa, altura, imc;

    scanf("%f", &massa);
    scanf("%f", &altura);

    if (massa > 1 && massa < 500 && altura > 1 && altura < 2.8){
        imc = massa / (altura * altura);
        printf("%.2f\n", imc);
    }

    return 0;
}
