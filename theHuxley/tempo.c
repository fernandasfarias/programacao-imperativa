#include <stdio.h>

int main(){
    int seg, resto=0;

    scanf("%d", &seg);

    int dias = seg/86400;
    resto = seg%86400;

    int horas = resto/3600;
    resto = resto%3600;

    int minutos = resto/60;
    int segundos = resto%60;

    printf("%d\n", dias);
    printf("%d\n", horas);
    printf("%d\n", minutos);
    printf("%d\n", segundos);

    return 0;
}