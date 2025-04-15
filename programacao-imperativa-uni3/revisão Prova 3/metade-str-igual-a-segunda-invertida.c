#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

int codigoValido(char *palavra){

    int tamanhoPalavra = strlen(palavra);
    char *primeiraParte;
    char *segundaParte;

    primeiraParte = malloc((tamanhoPalavra/2 + 1) * sizeof(char));
    segundaParte = malloc((tamanhoPalavra/2 + 1) * sizeof(char));

    for (int i = 0; i < tamanhoPalavra/2; i++){
        *(primeiraParte+i) = *(palavra+i);
    }

    for (int i = 0; i < tamanhoPalavra/2; i++){
        *(segundaParte+i) = *(palavra + tamanhoPalavra - i - 1);
    }
    

    if (strcmp(primeiraParte, segundaParte) == 0) return 1;

    free(primeiraParte);
    free(segundaParte);
    
    return 0;
}

int main(){
    char palavra[MAX];
    scanf("%s", palavra);

    if (codigoValido(palavra) == 1) printf("VALIDO\n");
    else printf("INVALIDO\n");

    return 0;
}