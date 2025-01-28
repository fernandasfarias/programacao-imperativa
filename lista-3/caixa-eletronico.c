#include <stdio.h>

int main(){
    int capacidade_total, encomendas;
    float custo;

    scanf("%d", &capacidade_total);
    scanf("%d", &encomendas);
    scanf("%f", &custo);

    float custo_terceirizacao = (encomendas - capacidade_total) * custo;

    printf("Custo de terceirizacao: R$%.2f\n", custo_terceirizacao);
    
    if(custo_terceirizacao >= 100000) printf("ABRA UM NOVO CENTRO\n");
    else printf("NAO ABRA UM NOVO CENTRO\n");

    return 0;
}