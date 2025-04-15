#include <stdio.h>

int main(){
    int n, m;
    int tempo, tempoTotal = 0, menorTempo, ganhador;

    scanf("%d %d%*c", &n, &m);

    int tempoUltimaVolta[n];

    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){
            scanf("%d%*c", &tempo);
            tempoTotal+=tempo;
            if (j == m-1) tempoUltimaVolta[i] = tempo;
        }

        if (i == 0){
            menorTempo = tempoTotal;
            ganhador = i;
        }

        else {

            if (tempoTotal < menorTempo){
                menorTempo = tempoTotal;
                ganhador = i;
            }

            else if (tempoTotal == menorTempo){
                if (tempoUltimaVolta[i] < tempoUltimaVolta[ganhador]) ganhador = i;
            }
        }

        tempoTotal = 0;
    }

    printf("%d\n", ganhador+1);

    return 0;
}