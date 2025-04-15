#include <stdio.h>

int main(){
    int q[50]; double v[50], volTotal = 0.0, mediaAbastecimento = 0; char caracter[50];
    int i = 0, somaDist = 0;

    while(1){
        scanf("%d", &q[i]);
        if (q[i] == 0) break;

        scanf("%lf %c", &v[i], &caracter[i]);
        i++;
    }

   // consumo total e media do abastecimento 

    for (int j = 0; j < i - 1; j++){
        somaDist += q[j+1] - q[j];
        volTotal += v[j+1];
        mediaAbastecimento += (q[j+1] - q[j])/v[j+1];
    }

    printf("Consumo total: %.2lf km/lt\n", somaDist/volTotal);
    printf("Media entre os abastecimentos: %.2lf km/lt\n", mediaAbastecimento/(i-1));

    // media em estrada e cidade

    int contE = 0, contC = 0, ultimoE, ultimoC;
    double mediaConsumoC = 0.0, mediaConsumoE = 0.0;

    for (int j = 0; j < i; j++){
        if (caracter[j] == 'E'){
            if (contE == 0){
                ultimoE = q[j];
            }
            else{
                int distE = q[j] - ultimoE;
                mediaConsumoE += distE/v[j];
                ultimoE = q[j];
            }
            contE++;
        }

        else {
            if (contC == 0){
                ultimoC = q[j];
            }
            else{
                int distC = q[j] - ultimoC;
                mediaConsumoC += distC/v[j];
                ultimoC = q[j];
            }
            contC++;
        }
    }

    if (contE > 1) printf("Media em estrada: %.2lf km/lt\n", mediaConsumoE/(contE-1));
    else printf("Nao rodou em estrada\n");

    if (contC > 1) printf("Media em cidade: %.2lf km/lt\n", mediaConsumoC/(contC-1));
    else printf("Nao rodou em cidade\n");

    return 0;
}