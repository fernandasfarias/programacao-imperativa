#include <stdio.h>

int main(){
    char l_1, l_2, l_3;

    scanf("%c %c %c%*c", &l_1, &l_2, &l_3);

        if (l_1 > l_2) {
        char aux = l_1; 
        l_1 = l_2;
        l_2 = aux; 
    }

    if (l_1 > l_3){
        char aux = l_1;
        l_1 = l_3;
        l_3 = aux;
    }
    
    if (l_2 > l_3){
        char aux = l_2;
        l_2 = l_3;
        l_3 = aux;
    }

    printf("%c %c %c\n", l_1, l_2, l_3);

    scanf("%c %c %c", &l_1, &l_2, &l_3);

    if (l_1 > l_2) {
        char aux = l_1; 
        l_1 = l_2;
        l_2 = aux; 
    }

    if (l_1 > l_3){
        char aux = l_1;
        l_1 = l_3;
        l_3 = aux;
    }
    
    if (l_2 > l_3){
        char aux = l_2;
        l_2 = l_3;
        l_3 = aux;
    }

    printf("%c %c %c\n", l_1, l_2, l_3);

    return 0;
}