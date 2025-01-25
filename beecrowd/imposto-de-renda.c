#include <stdio.h>

int main(void){
    float salario;

    scanf("%f", &salario);

    if (salario >= 0.00 && salario <= 2000){
        printf("Insento");
    }

    else if (salario >= 2000.01 && salario <= 3000){
        float valor_imposto = (salario - 2000.01) * 0.8;
        printf("R$ %.2f", valor_imposto);
    }

    else if(salario >= 3000.01 && salario <= 4500){
        float valor_imposto = (salario - )
    }
}