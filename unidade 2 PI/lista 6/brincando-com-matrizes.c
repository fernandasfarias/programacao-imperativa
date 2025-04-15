#include <stdio.h>

int main(){
    int linhas, colunas, matriz[100][100], positivos=0, negativos=0, dPrincipal=0, dSecundaria=0;

    scanf("%d %d", &linhas, &colunas);

    int ultimaColuna = colunas - 1;

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 0) positivos++;
            else negativos++;

            if (i == j) dPrincipal += matriz[i][j];
        }

        dSecundaria += matriz[i][ultimaColuna];
        ultimaColuna--;
    }

    printf("Matriz formada:\n");
    for (int i = 0; i < linhas; i++){

        for (int j = 0; j < colunas; j++){
            if (j != colunas-1) printf("%d ", matriz[i][j]);
            else printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    if (linhas != colunas) printf("A diagonal principal e secundaria nao pode ser obtida.\n");
    else printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", dPrincipal, dSecundaria);

    printf("A matriz possui %d numero(s) menor(es) que zero.\n", negativos);
    printf("A matriz possui %d numero(s) maior(es) que zero.\n", positivos);

    return 0;
}