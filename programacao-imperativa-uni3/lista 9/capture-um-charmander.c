#include <stdio.h>

void melhorDia(float dias[12][8]){

    char *meses[] = {
        "Janeiro", "Fevereiro", "Marco",
        "Abril", "Maio", "Junho", "Julho",
        "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    char *qualDia[] = {
        "Primeiro", "Segundo", "Terceiro", "Quarto"
    };
    char *finalDeSem[] = {
        "Sabado", "Domingo"
    };

    float melhorDia = 1.0;
    int mes = -1, dia;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 8; j++){
            scanf("%f", &dias[i][j]);
            if (dias[i][j] < 0.5){
                if (dias[i][j] < melhorDia){
                    melhorDia = dias[i][j];
                    mes = i;
                    dia = j;
                }
            }
        }
    }

    int indexDia;
    if (dia == 0 || dia == 1) indexDia = 0;
    else if (dia == 2 || dia == 3) indexDia = 1;
    else if (dia == 4 || dia == 5) indexDia = 2;
    else if (dia == 6 || dia == 7) indexDia = 3;

    if (mes == -1) printf("Proximo ano eu tento denovo...\n");
    else if (melhorDia <= 0.5){
        if (dia%2 == 0){
            printf("O melhor dia e no %s %s de %s\n", qualDia[indexDia], finalDeSem[0], meses[mes]);
        }
        else printf("O melhor dia e no %s %s de %s\n", qualDia[indexDia], finalDeSem[1], meses[mes]);
    }
}

int main(){

    float matriz[12][8];
    melhorDia(matriz);

    return 0;
}