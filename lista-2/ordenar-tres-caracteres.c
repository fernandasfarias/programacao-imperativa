#include <stdio.h> 

int main(void){
    char char_1a, char_2a, char_3a, char_1b, char_2b, char_3b;
    scanf("%c %c %c\n", &char_1a, &char_2a, &char_3a);
    scanf("%c %c %c",&char_1b, &char_2b, &char_3b);

    // ordenação para o primeiro conjunto de caracteres
    if (char_1a > char_2a) {
        char aux = char_1a; 
        char_1a = char_2a;
        char_2a = aux; 
    }

    if (char_1a > char_3a){
        char aux = char_1a;
        char_1a = char_3a;
        char_3a = aux;
    }
    
    if (char_2a > char_3a){
        char aux = char_2a;
        char_2a = char_3a;
        char_3a = aux;
    }

    // Ordenação para o segundo conjunto de caracteres
    if (char_1b > char_2b){
        char aux = char_1b;
        char_1b = char_2b;
        char_2b = aux;
    }

    if (char_1b > char_3b){
        char aux = char_1b;
        char_1b = char_3b;
        char_3b = aux;
    }

    if (char_2b > char_3b){
        char aux = char_2b;
        char_2b = char_3b;
        char_3b = aux;
    }

    printf("%c %c %c\n", char_1a, char_2a, char_3a);
    printf("%c %c %c\n", char_1b, char_2b, char_3b);

    return 0;
}
