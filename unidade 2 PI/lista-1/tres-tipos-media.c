#include <stdio.h>

int main(void){
    float nota_1, nota_2, nota_3, media, media_ponderada_1, media_ponderada_2;

    scanf("%f", &nota_1);
    scanf("%f", &nota_2);
    scanf("%f", &nota_3);

    media = (nota_1 + nota_2 + nota_3)/3;
    media_ponderada_1 = (nota_1*2 + nota_2*2 + nota_3*3)/7;
    media_ponderada_2 = (nota_1*1 + nota_2*2 + nota_3*2)/5;

    printf("%.2f\n", media);
    printf("%.2f\n", media_ponderada_1);
    printf("%.2f\n", media_ponderada_2);

    return 0;
}
