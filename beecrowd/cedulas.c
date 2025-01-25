#include <stdio.h>

int main(void){
    int valor;

    scanf("%d", &valor);

    // calculando a quantidade de notas 100.
    int notas_100 = valor/100;
    // calculando o resto da quantidade de notas.
    int resto_100 = valor%100;

    // calculando a quantidade de notas de 50 a partir do restante de 100.
    int notas_50 = resto_100/50;
    // calculando o restante das notas
    int resto_50 = resto_100%50;

    // calculando a quantidade notas de 20.
    int notas_20 = resto_50/20;
    int resto_20 = resto_50%20;

    // calculando a quantidade de notas de 10.
    int notas_10 = resto_20/10;
    int resto_10 = resto_20%10;

    // calculando a quant. de notas de 5.
    int notas_5 = resto_10/5;
    int resto_5 = resto_10%5;

    // calculando a quant. de notas de 2.
    int notas_2 = resto_5/2;
    int resto_2 = resto_5%2;

    // calculando a quant. de notas de 1.
    int notas_1 = resto_2/1;
    

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notas_100);
    printf("%d nota(s) de R$ 50,00\n", notas_50);
    printf("%d nota(s) de R$ 20,00\n", notas_20);
    printf("%d nota(s) de R$ 10,00\n", notas_10);
    printf("%d nota(s) de R$ 5,00\n", notas_5);
    printf("%d nota(s) de R$ 2,00\n", notas_2);
    printf("%d nota(s) de R$ 1,00\n", notas_1);
    return 0;
}
