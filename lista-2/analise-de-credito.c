#include <stdio.h>

int main(void){
    float salario, renda_comprometida, valor_maximo;
    
    scanf("%f", &salario);
    scanf("%f", &renda_comprometida);

    if (renda_comprometida >= (salario * 0.3)){
        printf("0.00\n");
    }

    else{
        valor_maximo = (salario * 0.3) - renda_comprometida;
        printf("%.2f\n", valor_maximo);
    }

    return 0;
}
