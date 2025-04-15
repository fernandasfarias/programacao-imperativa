#include <stdio.h>
#include <stdlib.h>

void ordenarNotas (int numAlunos, float *notas){

    for (int i = 0; i < numAlunos - 1; i++){
        int menorIndex = i;

        for (int j = i+1; j < numAlunos; j++){
            if (*(notas + j) < *(notas + menorIndex)){
                menorIndex = j;
            }
        }

        if (menorIndex != i){
            float aux = *(notas+i);
            *(notas+i) = *(notas+menorIndex);
            *(notas+menorIndex) = aux;
        }
    }

    for (int i = 0; i < numAlunos; i++){
        printf("%.2f\n", *(notas+i));
    }
}

int main(){
    int quant;
    scanf("%d", &quant);

    float *notas = malloc(quant * sizeof(float));

    for (int i = 0; i < quant; i++){
        scanf("%f", notas+i);
    }

    ordenarNotas(quant, notas);

    return 0;
}