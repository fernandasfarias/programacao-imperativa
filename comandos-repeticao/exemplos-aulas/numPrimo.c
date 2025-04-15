#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    do{
        int resto = numero%(numero-1);
        if (resto==0){
            printf("O número é primo");
            break;
        }
    }while(numero!=aqr);
}
