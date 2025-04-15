#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contagemMatrizBinaria(int i, int j, int **matriz){

    int quant = 0;

    for (int a = 0; a < i; a++){
        for (int b = 0; b < j; b++){
            scanf("%d", *(matriz+a)+b);
            if(*(*(matriz+a)+b) == 0) quant++;
        }
    }

    return quant;
}

int main(){
    int i, j;
    int **matrizBinaria;

    scanf("%d %d", &i, &j);

    matrizBinaria = (int **)malloc(i * sizeof(int *));
    for(int k = 0; k < i; k++){
        *(matrizBinaria+k) = (int *)malloc(j * sizeof(int));
    }

    printf("%d\n", contagemMatrizBinaria(i, j, matrizBinaria));

    for (int k; k < j; k++){
        free(*(matrizBinaria+k));
    }
    free(matrizBinaria);
    
    return 0;
}