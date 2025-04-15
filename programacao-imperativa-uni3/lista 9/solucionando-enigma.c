#include <stdio.h>
#include <stdlib.h>


int quadradoValido(int n, int m, int matriz[n][m]){

    int freq[4];
    int quantQuadrados = 0;

    for (int a = 0; a < n-1; a++){
        for (int b = 0; b < m-1; b++){

            for (int i = 0; i < 5; i++){
                freq[i] = 0;
            }

            for (int j = 0; j < 2; j++){
                for (int k = 0; k < 2; k++){
                    int numAtual = matriz[a+j][b+k];
                    if (numAtual >= 0 && numAtual <= 4){
                        freq[numAtual]++;
                    } 
                }
            }

            int eQuadrado = 1;
            for (int i = 0; i < 4; i++){
                if (freq[i] != 1){
                    eQuadrado = 0;
                    break;
                }
            }
            if (eQuadrado == 1) quantQuadrados++;

        }
    }

    return quantQuadrados;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];

    if (n == 1) printf("0\n"); // com apenas 1 linha, não podemos fazer um quadrado válido.

    else{
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("%d\n", quadradoValido(n, m, matriz));
    }

    return 0;
}