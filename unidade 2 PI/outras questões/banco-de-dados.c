#include <stdio.h>

typedef struct 
{
    int idade;
    char nome[50];
    char genero;
    char estadoCivil;
    int amigos;
    int fotos;

}Usuarios;

int main(){

    int quant;

    scanf("%d", &quant);

    Usuarios usuario[quant];

    for (int i = 0; i < quant; i++){
        scanf("%d%*c", &usuario[i].idade);
        scanf("%[^\n]%*c", usuario[i].nome);
        scanf("%c%*c", &usuario[i].genero);
        scanf("%c%*c", &usuario[i].estadoCivil);
        scanf("%d%*c", &usuario[i].amigos);
        scanf("%d%*c", &usuario[i].fotos);

        printf("Idade: %d\n", usuario[i].idade);
        printf("Nome: %s\n", usuario[i].nome);
        printf("Sexo: %c\n", usuario[i].genero);
        printf("Estado Civil: %c\n", usuario[i].estadoCivil);
        printf("Numero de amigos: %d\n", usuario[i].amigos);
        printf("Numero de fotos: %d\n\n", usuario[i].fotos);
    }

    return 0;

}