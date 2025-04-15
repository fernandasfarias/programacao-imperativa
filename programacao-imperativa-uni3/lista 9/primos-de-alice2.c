#include <stdio.h>

void selectionSort(int array[], int tamanho){
    int temp;

    for (int i = 0; i < tamanho-1; i++){
        int menorIndex = i;

        for (int j = i+1; j < tamanho; j++){
            if (array[j] < array[menorIndex]){
                menorIndex = j;
            }
        }

        if (menorIndex != i){
            temp = array[i];
            array[i] = array[menorIndex];
            array[menorIndex] = temp;
        }
    }
}

void imprimirArrayInteiros(int arr[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        if(i==tamanho-1) printf("%d\n", arr[i]);
        else printf("%d ", arr[i]);
    }
}

void selecionarPrimosCrescente(int n, int matriz[n][n]){

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

    selectionSort(quantPrimo, quant);
    imprimirArrayInteiros(quantPrimo, quant);
    return;

}

int main(){
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    selecionarPrimosCrescente(n, matriz);
    return 0;
}