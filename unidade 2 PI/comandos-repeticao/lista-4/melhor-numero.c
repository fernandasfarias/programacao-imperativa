#include <stdio.h>

int main(){
    int num, soma=0, fatorial;

    scanf("%d", &num);

    int div_inteira = num;

    while (div_inteira != 0)
    {  
        int resto = div_inteira%10;
        fatorial = 1;

        for (int i=resto; i>1; i--){
            fatorial = fatorial * i;
        }

        soma += fatorial;
        div_inteira = div_inteira/10;
    }

    if (soma!=num) printf("nao\n");
    else printf("melhor numero\n");

    return 0;
}