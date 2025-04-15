#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void contagemVogais(char *palavra){
    int vogais[5];

    for (int i = 0; i < 5; i++) vogais[i] = 0;

    while(*palavra != '\0'){
        if(*palavra == 'a' || *palavra == 'A') vogais[0]++;
        else if (*palavra == 'e' || *palavra == 'E') vogais[1]++;
        else if (*palavra == 'i' || *palavra == 'I') vogais[2]++;
        else if (*palavra == 'o' || *palavra == 'O') vogais[3]++;
        else if (*palavra == 'u' || *palavra == 'U') vogais[4]++;

        palavra++;
    }

    printf("a %d\n", vogais[0]);
    printf("e %d\n", vogais[1]);
    printf("i %d\n", vogais[2]);
    printf("o %d\n", vogais[3]);
    printf("u %d\n", vogais[4]);
}

int main(){
    char *frase;

    frase = malloc(sizeof(char) * 1000);

    scanf("%[^\n]", frase);

    contagemVogais(frase);

    return 0;
}