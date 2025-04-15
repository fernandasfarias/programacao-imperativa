#include <stdio.h>

typedef struct{
    char nome[100];
    int id;
    int ataque;
    int vida;
}Pokemons;

int main(){

    Pokemons red[6], blue[6];
    int ataqueRed, ataqueBlue, atualIDRed, atualIDBlue, indiceRed, indiceBlue;

    for (int i = 0; i < 6; i++){
        scanf("%[^\n]%*c", red[i].nome);
        scanf("%d%*c", red[i].id);
        scanf("%d%*c", red[i].ataque);
        scanf("%d%*c", red[i].vida);

        if (i == 0){
            ataqueRed = red[i].ataque;
            atualIDRed = red[i].id;
            indiceRed = i;
        }

        else{
            if (red[i].ataque > ataqueRed){
                ataqueRed = red[i].ataque;
                atualIDRed = red[i].ataque;
                indiceRed = i;
            }

            else if (red[i].ataque == ataqueRed && red[i].id < atualIDRed){
                atualIDRed = red[i].ataque;
                indiceRed = i;
            }
        }
    }

    return 0;
}