#include <stdio.h>
#include <string.h>

int main(){
    char frase[300], fraseSemEspacos[300];

    fgets(frase, 300, stdin);
    int tamanhoFrase = strlen(frase);

    int i = 0, j = 0;

    while(i < tamanhoFrase){
        if (frase[i] != ' ' || (frase[i] == ' ' && frase[i-1] != ' ')){
            fraseSemEspacos[j] = frase[i];
            j++;
        }

        i++;
    }

    
    for (int k = j-1; k >= 0; k--){
        if (fraseSemEspacos[k] == ' ') j--;
        else{
            fraseSemEspacos[j] = '\0';
            break;
        }
    }

    printf("%s", fraseSemEspacos);

    return 0;
}