#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** textoMaiusculo(char **texto, int quantLinhas){
    for (int i = 0; i < quantLinhas; i++){
        for (int j = 0; texto[i][j] != '\0'; j++){
            if (texto[i][j] >= 'a' && texto[i][j] <= 'z'){
                texto[i][j] = texto[i][j] - ('a' - 'A');
            }
        }
    }

    return texto;
}

void imprimirTexto (char **texto, int quantLinhas){
    // retirar a possibilidade de imprimir o the end.
    for (int i = 0; i < quantLinhas; i++){
        if (i == quantLinhas-1) printf("%s", texto[i]);
        else printf("%s ", texto[i]);
    }
}

int main(){
    int quantLinhas = 0;
    char **texto;

    // alocando 1 linha de ponteiro para char.
    texto = malloc(1 * sizeof(char *));

    // alocando nessa linha no máximo 75 caracteres + \0.
    texto[0] = malloc(76 * sizeof(char));

    while(1){
        scanf("%[^\n]%*c", texto[quantLinhas]);

        if (strcmp(texto[quantLinhas], "the end!") == 0) break;

        quantLinhas++;

        // realocando mais uma linha.
        texto = realloc(texto, (quantLinhas+1) * sizeof(char *));
        texto[quantLinhas] = malloc(76 * sizeof(char));
    }

    textoMaiusculo(texto, quantLinhas);
    imprimirTexto(texto, quantLinhas);

    return 0;
}