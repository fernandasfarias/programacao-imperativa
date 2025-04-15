#include <stdio.h>

int main(void){
    int hamburguer, cheeseburger, fritas, refrigerante, milkshake; float conta_final;

    scanf("%d", &hamburguer);
    scanf("%d", &cheeseburger);
    scanf("%d", &fritas);
    scanf("%d", &refrigerante);
    scanf("%d", &milkshake);

    conta_final = (hamburguer*3) + (cheeseburger*2.5) + (fritas*2.5) + refrigerante + (milkshake*3);

    printf("Conta final: %.2f\n", conta_final);

    return 0;
}
