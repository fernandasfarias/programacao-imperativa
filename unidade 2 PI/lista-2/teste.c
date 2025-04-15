#include <stdio.h>

int main(void){
    char char_1a, char_2a, char_3a, char_1b, char_2b, char_3b;
    scanf("%c %c %c", &char_1a, &char_2a, &char_3a);
    

    if (char_1a > char_2a) {
    char aux = char_1a;
    char_1a = char_2a; // troca os valores
    char_2a = aux;
    // fica: b c a (se char_1a > char_2a)
}

    if (char_2a > char_3a) {
    char aux = char_2a;
    char_2a = char_3a; // troca os valores
    char_3a = aux;
    // fica: b a c (se char_2a > char_3a)
    }

    if (char_1a > char_2a) {
    char aux = char_1a;
    char_1a = char_2a; // troca os valores
    char_2a = aux;
    // fica: a b c (se char_1a > char_2a)
    }

printf("%c %c %c", char_1a, char_2a, char_3a);
return 0;
}