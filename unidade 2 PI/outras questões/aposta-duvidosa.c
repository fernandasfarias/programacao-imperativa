#include <stdio.h>

int main(){

    int quant, n, dPrincipal, dSecundaria, linhasIguais, colunasIguais;

    scanf("%d", &quant);

    for (int i = 0; i < quant; i++){

        scanf("%d", &n);

        int matriz[n][n];
        int somaLinhas[n], somaColunas[n];
        int ultimaColuna = n-1;
        dPrincipal = 0;
        dSecundaria = 0;
        linhasIguais = 0;
        colunasIguais = 0;

        
        for (int a = 0; a < n; a++){
            somaLinhas[a] = 0;
            somaColunas[a] = 0;
        }

        for (int linha = 0; linha < n; linha++){

            for (int coluna = 0; coluna < n; coluna++){

                scanf("%d%*c", &matriz[linha][coluna]);

                if (linha == coluna) dPrincipal += matriz[linha][coluna];
                somaLinhas[linha] += matriz[linha][coluna];
                somaColunas[coluna] += matriz[linha][coluna];
            }
            dSecundaria += matriz[linha][ultimaColuna];
            ultimaColuna--;
        }

        int somaPrimeiraLinha, somaPrimeiraColuna;

        for (int j = 0; j < n; j++){

            if (j == 0){
                somaPrimeiraLinha = somaLinhas[j];
                somaPrimeiraColuna = somaColunas[j];
            }

            else {
                if (somaLinhas[j] == somaPrimeiraLinha) linhasIguais = 1;
                else linhasIguais = 0;

                if (somaColunas[j] == somaPrimeiraColuna) colunasIguais = 1;
                else colunasIguais = 0;
            }
        }

        if (linhasIguais == 1 && colunasIguais == 1 && dPrincipal == dSecundaria && dPrincipal == somaPrimeiraLinha && somaPrimeiraLinha == somaPrimeiraColuna){
            printf("Eh quadrado magico!!!\n");
        }
        else printf("Nao eh!!!\n");

    }
}