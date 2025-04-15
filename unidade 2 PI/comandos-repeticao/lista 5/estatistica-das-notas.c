#include <stdio.h>

int main(){
    int quant, notas[50], soma=0;

    scanf("%d", &quant);

    for (int i = 0; i < quant; i++){
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    // calculando a media

    float media = (float)soma/quant;
    printf("Media: %.2f\n", media);

    // calculando a mediana

    // primeiro passo: ordenar a lista
    
    for (int i = 0; i < quant; i++){
        for (int j = 0; j < quant-1; j++){
            if (notas[j] > notas[j+1]){
                int aux = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = aux;
            }
        }
    }

    // apos ordenado, verificar se a quantidade e par ou impar
        // se for impar, a mediana e o termo do meio
    if (quant % 2 != 0){
        float mediana = notas[quant/2];
        printf("Mediana: %.2f\n", mediana);
    } 
        // se for par, sera a media dos dois elementos centrais
    else{
        float mediana = (notas[quant/2]+notas[(quant/2)+1])/2;
        printf("Mediana: %.2f\n", mediana);
    }

    // calculando a moda

    int frequencia = 0, max_frequencia = 0, numero_moda = 0, empate = 0;
    for (int i = 0; i < quant; i++){
        for (int j = i; j < quant; j++){
            if (notas[i] == notas[j]) frequencia++;
        }
        if (frequencia > max_frequencia){
            max_frequencia = frequencia;
            numero_moda = notas[i];
            empate = 0; // é importante, pois caso empate seja 1 mas encontramos uma frequência
            // maior, ela precisa ser reinicializada com zero
        }
        else if (frequencia == max_frequencia) empate = 1;
        frequencia = 0;
    }

    if (empate == 0) printf("Moda: %.2f\n", (float)numero_moda);
    else printf("Nao tem moda\n");

    return 0;
}