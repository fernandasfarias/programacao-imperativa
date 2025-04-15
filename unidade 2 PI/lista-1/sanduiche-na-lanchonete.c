#include <stdio.h>
#include <stdlib.h>

int main(void){
    int quant_sanduiche; float peso_queijo, peso_presunto, peso_carne;

    scanf("%d", &quant_sanduiche);

    peso_queijo = quant_sanduiche * 2 * 0.05;
    peso_presunto = quant_sanduiche* 0.05;
    peso_carne = quant_sanduiche * 0.1;

    printf("%.2f\n", peso_queijo);
    printf("%.2f\n", peso_presunto);
    printf("%.2f\n", peso_carne);

    return 0;

}