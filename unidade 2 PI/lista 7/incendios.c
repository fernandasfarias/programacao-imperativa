#include <stdio.h>

typedef struct{
    int id;
    float temp;
    char fumaca;
} Sprinklers;

int main(){

    int quantTestes;

    scanf("%d", &quantTestes);

    for (int i = 0; i < quantTestes; i++){

        int soma = 0;
        int n;

        scanf("%d", &n);

        Sprinklers sprinkle[n];


        for (int j = 0; j < n; j++){
            
            scanf("%d %f %c%*c", &sprinkle[j].id, &sprinkle[j].temp, &sprinkle[j].fumaca);

            soma += sprinkle[j].temp;
        }

        /*caso a temperatura seja menor que 40 e não tenha tido indícios de fumaça. 
        É necessário avaliar se ultrapassou a média*/

        float media = (float)soma/n;
        float quinzePorCento = 0.15*media;
        media += quinzePorCento;

        // após todos os valores terem sido colocados, poderemos comparar a média.

        printf("TESTE %d\n", i+1);
        for (int k = 0; k < n; k++){
            if (sprinkle[k].temp > 40 || sprinkle[k].fumaca == 'S' || sprinkle[k].temp > media) printf("%d\n", sprinkle[k].id);
        }
    }

    return 0;
}