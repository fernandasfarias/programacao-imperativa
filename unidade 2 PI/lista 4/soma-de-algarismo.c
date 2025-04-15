#include <stdio.h>

int main(){
    int num, soma = 0;

    scanf("%d", &num);

    while (num != 0){
        int resto = num % 10;
        soma += resto;
        num = num/10; 
    }

    printf("%d\n", soma);

    return 0;
}