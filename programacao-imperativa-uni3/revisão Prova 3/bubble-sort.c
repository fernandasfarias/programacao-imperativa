#include <stdio.h>

int main(){
    int numeros[7] = {9, 4, 22, 3, 1, 8, 0};

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6-i; j++){
            if (numeros[j] > numeros[j+1]){
                int aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    for (int i = 0; i < 7; i++){
        printf("%d ", numeros[i]);
    }

    return 0;
}