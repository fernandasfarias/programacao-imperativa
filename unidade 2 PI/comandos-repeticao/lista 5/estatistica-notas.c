#include <stdio.h>

int main(){
    int quant=0, notas[50], soma=0;

    scanf("%d", &quant);

    for (int i = 0; i<quant; i++){
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    float media = (float)(soma)/quant;

    printf("%.2f\n", media);

    // bubble sort
    for (int i = 0; i < quant; i++){
        for (int a = 0; a < quant-1; a++){
            if (notas[a] > notas[a+1]){
                int aux = notas[a];
                notas[a] = notas[a+1];
                notas[a+1] = aux;
        }
        }
    }

    for (int i=0; i<quant; i++){
        printf("%d ", notas[i]);
    }

    // moda
        // começando a partir do 1
    int moda = 0, cont = 0;

    for(int i = 0; i < quant; i++){
        for (int j = i; j < quant; j++){
            if (notas[i] == notas[j]) cont++;
        }
        if (cont > 1) moda = notas[i]; // moda atual
        cont = 0;
    }
    // isso está errado pois o número 1 pode ser moda também!!
    if (moda > 1){
        printf("\nA moda é: %d\n", moda);
    }
    else printf("\nNão há moda\n");
    return 0;
}