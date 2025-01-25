#include <stdio.h> 

int main(void){
    float preco_avela, preco_caramelo, preco_passas, preco_total; int quant_avela, quant_caramelo, quant_passas;

    scanf("%f", &preco_avela);
    scanf("%f", &preco_caramelo);
    scanf("%f", &preco_passas);

    scanf("%d", &quant_avela);
    scanf("%d", &quant_caramelo);
    scanf("%d", &quant_passas);

    preco_total = (preco_avela * quant_avela) + (preco_caramelo * quant_caramelo) + (preco_passas * quant_passas);

    printf("Valor: R$%.2f\n", preco_total);
    return 0; 
}
