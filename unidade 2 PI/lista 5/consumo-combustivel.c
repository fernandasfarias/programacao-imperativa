#include <stdio.h>

int main(){

    int q[200], i = 0;
    float v[200];
    char c[200];
    
    // primeiro: o usuário irá digitar todos os valores até digitar zero
    while (1){
        scanf("%d", &q[i]);

        if (q[i] == 0) break;

        scanf("%f %c%*c", &v[i], &c[i]);

        i++;
    }

    int somaTotalKm = 0; float somaTotalVol = 0.0, somaMediaAbastecimento = 0.0;
    int quantCidade = 0, kmCidade = 0, quantEstrada = 0, kmEstrada = 0;
    float abastecimentoCidade = 0.0, abastecimentoEstrada = 0.0;

    for (int j = 0; j < i; j++){

        
        if (j != i-1){ // o último elemento não pode ser incluído.

            // primeira coisa: Calcular o consumo total
            somaTotalKm += (q[j+1] - q[j]);

            // já aproveitando para calcular a média entre os abastecimentos

            somaMediaAbastecimento += (q[j+1] - q[j])/v[j];

            // usando para calcular para cada tipo: Cidade ou Estrada.

            if (c[j] == 'C'){
                quantCidade++;
                kmCidade = (q[j+1] - q[j]);
                abastecimentoCidade += (kmCidade/v[j+1]);
            }

            else if (c[j] == 'E'){
                quantEstrada++;
                kmEstrada = (q[j+1] - q[j]);
                abastecimentoEstrada += (kmEstrada/v[j+1]);
            }
        }

        if (j != 0) somaTotalVol += v[j];

    }

    printf("Consumo Total: %.2f km/lt\n", somaTotalKm/somaTotalVol);
    printf("Média entre os abastecimentos: %.2f km/lt\n", somaMediaAbastecimento/(i-1));
    if (quantEstrada == 0) printf("Não rodou em estrada\n");
    else printf("Media em estrada: %.2f km/lt\n", abastecimentoEstrada/quantEstrada);
    if(quantCidade == 0) printf("Não rodou em cidade\n");
    else printf("Media em cidade: %.2f km/lt\n", abastecimentoCidade/quantCidade);

    return 0;
}