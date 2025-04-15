#include <stdio.h>

void palindromoComParenteses(char texto[]){
    int quantAbreParen = 0;
    int quantFechaParent = 0;
    int quantCaracteresTotal = 0;
    int caracteresIguais = 0;
    char palavra[100000];

    // verificando a quantidade caracteres no total.
    int i = 0;
    while(texto[i] != '\0'){
        quantCaracteresTotal++;
        i++;
    }

    // A quantidade de parênteses abertos e fechados deve ser a mesma e o parênteses aberto SEMPRE deve vir antes do fechado.
    int balanceamento = 0;
    for (int i = 0; i < quantCaracteresTotal; i++){
        if (texto[i] == '('){
            quantAbreParen++;
            balanceamento++;
        }
        else if (texto[i] == ')'){
            balanceamento--;
            if (balanceamento < 0) break;
            quantFechaParent++;
        }
    } 
    
    // invertendo a palavra
    int k = 0;
    for (int i = quantCaracteresTotal-1; i >= 0; i--){
        if (texto[i] != '(' && texto[i] != ')'){
            palavra[k] = texto[i];
            k++;
        }
    }

    // comparando as palavras
    k = 0;
    for (int i = 0; texto[i] != '\0'; i++){
        if (texto[i] != '(' && texto[i] != ')'){
            if (palavra[k] == texto[i]) k++;
            else{
                caracteresIguais = 1; 
                break;
            }
        }
    }

    if (quantAbreParen == quantFechaParent && balanceamento == 0) printf("PARENTESES: BALANCEADOS\n");
    else printf("PARENTESES: NAO BALANCEADOS\n");
    if (caracteresIguais == 0) printf("PALINDROMO: SIM\n");
    else printf("PALINDROMO: NAO\n");
    printf("----\n");

}

int main(){
    char string[100000];

    printf("----\n");
    while(scanf("%s", string) != EOF){
        palindromoComParenteses(string);
    }
}