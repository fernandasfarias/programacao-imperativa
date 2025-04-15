#include <stdio.h> 
#include <string.h>

int main(){
    char stringOriginal[300], novaFormatacao[300];
    int i = 0, j = 0;

    fgets(stringOriginal, 300, stdin);
    
    int tamanhoString = strlen(stringOriginal);
    
    while (i < tamanhoString){
        
        if (stringOriginal[i] != ' ' || (stringOriginal[i] == ' ' && stringOriginal[i-1] != ' ')){
            novaFormatacao[j] = stringOriginal[i];
            j++;
        }

        i++;
    }

    printf("%s", novaFormatacao);
    return 0;
}