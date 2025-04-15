#include <stdio.h>
#include <stdlib.h>

int percorrerEsomar (int quantLinhas, int quantColunas, int matriz[quantLinhas][quantColunas], int linhaPartida, int colunaPartida, int quant){
    int soma = 0;

    int novaPosLinha = linhaPartida;
    int novaPosColuna = colunaPartida;

    int i = 0;
    int comando;

    while(i < quant){
        scanf("%d", &comando);

        if (comando == 0){
            // diagonal inferior à esquerda (aumenta linha e diminui coluna).
            novaPosLinha++;
            novaPosColuna--;
            if (novaPosLinha >= quantLinhas || novaPosColuna < 0){
                novaPosLinha--;
                novaPosColuna++;
            }
        }

        else if (comando == 1){
            // diagonal superior à esquerda (diminui linha e diminui coluna)
            novaPosLinha--;
            novaPosColuna--;
            if (novaPosLinha < 0 || novaPosColuna < 0){
                novaPosLinha++;
                novaPosColuna++;
            }
        }

        else if (comando == 2){
            // diagonal inferior à direita (aumenta linha e aumenta coluna)
            novaPosLinha++;
            novaPosColuna++;
            if (novaPosLinha >= quantLinhas || novaPosColuna >= quantColunas){
                novaPosLinha--;
                novaPosColuna--;
            }

        }

        else if (comando == 3){
            // diagonal superior à direita (diminui linha e aumenta coluna)
            novaPosLinha--;
            novaPosColuna++;
            if (novaPosLinha < 0 || novaPosColuna >= quantColunas){
                novaPosLinha++;
                novaPosColuna--;
            }


        }
        soma += matriz[novaPosLinha][novaPosColuna];
        printf("%d\n", soma);
        i++;
    }

    return soma;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int linhaInicial, colunaInicial;
    scanf("%d", &linhaInicial);
    scanf("%d", &colunaInicial);

    int k;
    scanf("%d", &k);

    printf("%d\n", percorrerEsomar(n, m, matriz, linhaInicial, colunaInicial, k));

    return 0;
}