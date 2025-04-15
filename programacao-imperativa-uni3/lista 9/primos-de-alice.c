#include <stdio.h>

void primosCrescentes(int n, int matriz[n][n]){

    int quant = 0, ePrimo = 1, a = 0;
    int quantPrimo[n*n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            ePrimo = 1;
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] <= 1) ePrimo = 0;

            else {
                for (int k = 2; k * k <= matriz[i][j]; k++){
                    if (matriz[i][j]%k == 0){
                        ePrimo = 0;
                        break;
                    }
                }
            }

            if (ePrimo == 1){
                quant++;
                quantPrimo[a++] = matriz[i][j];
            }
        }
    }

    // bubble sort um pouco mais eficiente
    int encontrado;
    for (int i = 0; i < quant-1; i++){
        encontrado = 0;
        for (int j = 0; j < quant-1-i; j++){
            if (quantPrimo[j] > quantPrimo[j+1]){
                encontrado = 1;
                int aux = quantPrimo[j];
                quantPrimo[j] = quantPrimo[j+1];
                quantPrimo[j+1] = aux;
            }
            if (encontrado == 0) break;
        }
    }

    for (int i = 0; i < quant; i++){
        if (i == quant-1) printf("%d\n", quantPrimo[i]);
        else printf("%d ", quantPrimo[i]);
    }

}

int main(){
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    primosCrescentes(n, matriz);
    return 0;
}