#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int quant = 0;

    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);

    int tamanhoSubstring  = tamanho2+1;
    char substringAtual[tamanhoSubstring];

    for (int i = 0; i < tamanho1; i++){

        // se str1, a cada iteração, começar com a mesma letra de str2, comparo com o restante.
        if (str1[i] == str2[0]){
            int j = i;
            int cont = 0;
            substringAtual[0] = '\0'; // garantir que essa string sempre comece vazia

            while(cont < tamanho2){
                substringAtual[cont] = str1[j];
                cont++, j++;
            }

            substringAtual[tamanhoSubstring-1] = '\0';// garantir que termine com o caracter nulo.
            if (strcmp(substringAtual, str2) == 0) quant++;
        }

    }

    printf("%d\n", quant);

    return 0;
}