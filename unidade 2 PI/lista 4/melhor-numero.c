#include <stdio.h>

int main(){

    int num, soma = 0;

    scanf("%d", &num);

    int copiaNum = num;

    while (copiaNum != 0){

        int numAtual = copiaNum%10;

        int fatorial = 1;

        for (int i = numAtual; i > 1; i--){
            fatorial = fatorial * i;
        }

        soma += fatorial;
        copiaNum = copiaNum/10;
    }

    if (soma == num) printf("melhor numero\n");
    else printf("nao\n");

    return 0;
}