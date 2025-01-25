#include <stdio.h> 

int main(void){
    int segundos;

    scanf("%d", &segundos);

    // converter segundos para dias
    int dias = segundos / 86400;
    // converter segundos para horas
    int horas = (segundos % 86400) / 3600;
    // converter segundos para minutos
    int minutos = (segundos % 3600) / 60;
    // quantidade de segundos
    int segundos_2 = segundos % 60;

    printf("%d:%d:%d:%d\n", dias, horas, minutos, segundos_2);

    return 0;
}