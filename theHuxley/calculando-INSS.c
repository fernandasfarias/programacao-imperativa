#include <stdio.h>

int main(){
    float salario, contribuicao;

    scanf("%f", &salario);

    if(salario <= 1751.81){
        contribuicao = salario * 0.08;
        printf("Desconto do INSS: R$ %.2f\n", contribuicao);
    }

    else if(salario > 1751.81 && salario <= 2919.72){
        contribuicao = salario * 0.09;
        printf("Desconto do INSS: R$ %.2f\n", contribuicao);
    }

    else if(salario > 2919.72 && salario <= 5839.45){
        contribuicao = salario * 0.11;
        printf("Desconto do INSS: R$ %.2f\n", contribuicao);
    }

    else{
        contribuicao = 5839.45 * 0.11;
        printf("Desconto do INSS: R$ %.2f\n", contribuicao);
    }

    return 0;
}
