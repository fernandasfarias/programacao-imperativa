#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int tamanho, int **matriz){
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            scanf("%d", *(matriz+i)+j);
        }
    }
}

int percorrerLinhas(int tamanho, int **matriz){

    int freq[tamanho+1];
    for (int i = 0; i < tamanho; i++){ 
        for (int j = 0; j <= tamanho; j++){
            freq[j] = 0;
        }

        for (int j = 0; j < tamanho; j++){
            int numAtual = *(*(matriz+i)+j);
            freq[numAtual]++;
            if (freq[numAtual] > 1) return 1;
        }
    }

    return 0;
}

int percorrerColunas(int tamanho, int **matriz){
    
    int freq[tamanho+1];
    for (int i = 0; i < tamanho; i++){

        for (int j = 0; j <= tamanho; j++){
            freq[j] = 0;
        }

        for (int j = 0; j < tamanho; j++){
            int numAtual = *(*(matriz+j)+i);
            freq[numAtual]++;
            if (freq[numAtual] > 1) return 1;
        }
    }
    return 0;
}

int percorrerBlocos (int tamanho, int **matriz){
    int raizQuadrada;

    // descobrir a quantidade de linhas e colunas de cada bloco. (matriz 9x9 forma 9 blocos de 3x3 cada)
    for (int i = 0; i < tamanho; i++){
        if (i*i == tamanho){
            raizQuadrada = i;
            break;
        }
    }

    int freq[tamanho+1]; // guardar a frequência de 1 até n (incluindo o próprio n).

    // encontrar a linha inicial e coluna inicial de cada bloco. // ex: 00, 02, 20, 22. (4x4)
    for (int a = 0; a < tamanho; a += raizQuadrada){
        for (int b = 0; b < tamanho; b += raizQuadrada){
                
            // inicializar todas as frequências com zero a cada bloco.
            for (int n = 0; n <= tamanho; n++){
                freq[n] = 0;
            }

            // percorrer dentro de cada bloco. 
            for (int j = 0; j < raizQuadrada; j++){
                for (int k = 0; k < raizQuadrada; k++){
                    int numAtual = *(*(matriz + a + j) + b + k);
                    freq[numAtual]++;
                    if (freq[numAtual] > 1){
                        return 1;
                    }
                }
            }
        }
    }

    return 0;
}
void sudokuValido(int tamanho, int **matriz){

    if (percorrerLinhas(tamanho, matriz) == 1 || percorrerColunas(tamanho, matriz) == 1 || percorrerBlocos(tamanho, matriz) == 1){
        printf("NO\n");
    }
    else printf("YES\n");
}

int main(){
    int n;
    scanf("%d", &n);

    // alocação dinâmica do tamanho da matriz.
    // **matriz == ponteiro para ponteiro de inteiro
    int **matriz = (int **)malloc(n * sizeof(int *)); // alocando n ponteiros para inteiros.
    for (int i = 0; i < n; i++){
        matriz[i] = (int *)malloc(n * sizeof(int)); // alocando n inteiros.
    }

    preencherMatriz(n, matriz);
    sudokuValido(n, matriz);

    return 0;
}