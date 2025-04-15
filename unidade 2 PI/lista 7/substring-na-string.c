#include <stdio.h>
#include <string.h>

int main(){

    char stringOriginal[50];
    char substring[50];

    scanf("%[^\n]%*c", stringOriginal);
    scanf("%[^\n]", substring);

    int tamanhoOriginal = strlen(stringOriginal);
    int tamanhoSubstring = strlen(substring);

    int quantSubstringsIguais = 0;


    for (int i = 0; i < tamanhoOriginal; i++){
        
        int indice = i;
        int quantidadeLetrasIguais = 0;

        if (stringOriginal[i] == substring[0]){
            quantidadeLetrasIguais++;

            for (int j = 1; j < tamanhoSubstring; j++){
                indice = indice+1;
                if (stringOriginal[indice] == substring[j]) quantidadeLetrasIguais++;
            }
        }

        if (quantidadeLetrasIguais == tamanhoSubstring) quantSubstringsIguais++;
    }

    printf("%d\n", quantSubstringsIguais);

    return 0;
}