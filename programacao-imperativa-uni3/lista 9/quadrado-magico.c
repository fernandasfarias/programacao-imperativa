#include <stdio.h>


void quadradoMagico(int n, int matriz[n][n]){
    
    int somaLinhas[n], somaColunas[n], dPrincipal = 0, dSecundaria = 0;
    int ultimaColuna = n-1;

    for (int i = 0; i < n; i++){
        somaLinhas[i] = 0;
        somaColunas[i] = 0;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
            if (i == j) dPrincipal += matriz[i][j];
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }

        dSecundaria += matriz[i][ultimaColuna];
        ultimaColuna--;
    }

    int linhasIguais = 0, colunasIguais = 0;
    int primeiraLinha = somaLinhas[0], primeiraColuna = somaColunas[0];
    for (int i = 0; i < n; i++){
        if(somaLinhas[i] != primeiraLinha) linhasIguais = 1;
        if(somaColunas[i] != primeiraColuna) colunasIguais = 1;
    }

    if (linhasIguais == 0 && colunasIguais == 0 && dPrincipal == dSecundaria && dPrincipal == primeiraLinha && primeiraLinha == primeiraColuna){
        printf("%d\n", primeiraLinha);
    }
    else printf("-1");
}

int main(){
    int n;
    scanf("%d", &n);
    int matriz[n][n];

    quadradoMagico(n, matriz);
    return 0;
}