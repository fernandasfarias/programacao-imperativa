#include <stdio.h> 

int main(void){
    int dias, quilometragem, km_permitido; float preco_total;

    scanf("%d", &dias);
    scanf("%d", &quilometragem);

    /* calculando o máximo de km que ele pode rodar (sem exceder o limite)
    de acordo com a quant de dias */
    km_permitido = 100 * dias;

    if (quilometragem > km_permitido){
        preco_total = (90 * dias) + (quilometragem - km_permitido)*12;
        printf("%.2f\n", preco_total);
    }

    else{
        preco_total = 90 * dias;
        printf("%.2f\n", preco_total);
    }
    return 0;
}
