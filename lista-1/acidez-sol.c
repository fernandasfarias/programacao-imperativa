#include <stdio.h>

int main(void){
    float valor;

    scanf("%f", &valor);

    if (valor < 7){
        printf("Acida\n");
    }

    else if (valor > 7)
    {
        printf("Basica\n");
    }

    else {
        printf("Neutra\n");
    }
    
    return 0;
}