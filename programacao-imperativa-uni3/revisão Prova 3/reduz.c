#include <stdio.h>
#include <string.h>

void diminuindoEAlternandoValor (float *x, float *y){
    *x = *x - *y;
}

int main(){
    float a, b;
    scanf("%f %f", &a, &b);

    diminuindoEAlternandoValor(&a, &b);

    printf("%.2f %.2f\n", a, b);
    return 0;
}