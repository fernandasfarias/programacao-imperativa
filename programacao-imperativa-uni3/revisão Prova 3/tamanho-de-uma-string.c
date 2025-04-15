#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tamstr(char *palavra){
    char *ptr = palavra;

    while(*ptr != '\0'){
        ptr++;
    }

    return ptr - palavra;
}

int main(){
    char *palavra;
    palavra = malloc(sizeof(char)*10);

    while(1){
        scanf("%s%*c", palavra);
        if(strcmp(palavra, "FIM") == 0) break;
        printf("%d\n", tamstr(palavra));
    }

    return 0;
}