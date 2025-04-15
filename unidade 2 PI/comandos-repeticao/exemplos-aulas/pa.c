// realizar a soma de uma PA sem a fórmula

#include <stdio.h>

int main(){
    // valor inicial, razão, número de termos
    int valor_inicial, razao, num_termos, i=0, valor_atual, soma_total=0;

    printf("Digite o valor do primeiro termo: \n");
    scanf("%d%*c%*c", &valor_inicial);

    printf("Digite o valor da razão: \n");
    scanf("%d%*c%*c", &razao);

    printf("Digite a quantidade total de termos: \n");
    scanf("%d%*c%*c", &num_termos);

    valor_atual = valor_inicial;
    while(i<num_termos){
        soma_total += valor_atual;
        valor_atual += razao;
        i++;
    }

    printf("A soma total dos termos é: %d\n", soma_total);
    return 0;
}
