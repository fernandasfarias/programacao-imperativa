#include <stdio.h>

int main(void){
    float salario, novo_salario;

    scanf("%f", &salario);

    if(salario > 500){
        novo_salario = salario * 1.1;
        printf("%.2f\n", novo_salario);
    }

    else if(salario > 300 && salario <= 500){
        novo_salario = salario * 1.07;
        printf("%.2f\n", novo_salario);
    }

    else{
        novo_salario = salario * 1.05;
        printf("%.2f\n", novo_salario);
    }

    return 0;
}