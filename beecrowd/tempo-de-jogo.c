#include <stdio.h>

int main(){
    int hora_comeco, hora_termino;

    scanf("%d %d", &hora_comeco, &hora_termino);

    if (hora_comeco >= hora_termino){
        printf("O JOGO DUROU %d HORA(S)\n", (24-hora_comeco)+hora_termino);
    }

    else if (hora_termino > hora_comeco){
        printf("O JOGO DUROU %d HORA(S)\n", hora_termino-hora_comeco);
    }

    return 0;
}