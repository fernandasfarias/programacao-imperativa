#include <stdio.h>

int main(){
    int n, m, tempo, soma=0, valor_min, ganhador;

    scanf("%d %d", &n, &m);

    //para cada pessoa eu preciso colocar o tempo de cada volta que ela deu

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &tempo);
            soma += tempo; // somando o tempo de voltas dessa pessoa
        }

        /*caso seja a primeira pessoa, irei inicializar a minha variável valor_min com a
        primeira soma para poder comparar com as das outras pessoas*/

        if (i == 0){
            valor_min = soma;
            ganhador = i+1; // defino essa pessoa *inicialmente* como a ganhadora
        }
        else {
            if (soma < valor_min) { // caso as próximas somas sejam menores, irei atualizar
                valor_min = soma;
                ganhador = i+1; // somando com mais 1 pois i começa a partir do zero
            }
        }

        soma = 0; // zerando a soma para que eu possa reutilizá-la novamente sem erros
    }

    printf("%d\n", ganhador);
    return 0;
}