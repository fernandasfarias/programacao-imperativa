#include <stdio.h>
#include <stdlib.h>

// se eu quero que a alocação de memória reflita para fora da função, eu preciso usar ***(acessa o endereço)
void informacoesColetadas(int ***bancodedados){
    
    int t, *minutos = NULL; // para usar o realloc, já inicializo com NULL.
    *bancodedados = NULL; // a mesma coisa acontece aqui.
    int quantDias = 0; // quantidade de dias que foram inseridos.
    int quantMinutos = 0; // quantos minutos foram observados em determinado dia.
    int diaADeletar, diaMaiorPiscada, quantPiscadas, minutoAComparar;

    while(1){
        scanf("%d", &t);

        if (t == 0) break;

        // adicionar um novo dia no meu banco de dados. Cada linha representa um dia, cada coluna, o números de piscadas.
        if (t == 1){
            
            // quantidade de minutos (total de colunas na nossa matriz).
            scanf("%d%*c", &quantMinutos);

            // alocando a quantidade de minutos no array.
            // é importante ter um array que guarda o total de minutos de cada dia pois 
            // vamos utilizá-la caso t seja 2.
            minutos = realloc(minutos, (quantDias+1) * sizeof(int));
            minutos[quantDias] = quantMinutos;

            // alocando os dias no vetor.
            *bancodedados = realloc(*bancodedados, ((quantDias+1) * sizeof(int *)));

            // alocando a quantidade de piscadas de acordo com o total de minutos monitorados a cada dia.
            (*bancodedados)[quantDias] = malloc(quantMinutos * sizeof(int));

            // armazenando a quantidade de piscadas a cada minuto.
            for (int i = 0; i < quantMinutos; i++){
                scanf("%d", &(*bancodedados)[quantDias][i]);
            }

            // um dia adicionado.
            quantDias++;

            // imprimindo o total de dias até o momento.
            printf("%d\n", quantDias);
        }

        // remover um dia do banco de dados e mostrar quantos minutos foram monitorados nesse dia.
        if (t == 2){
            scanf("%d%*c", &diaADeletar); // capturando o dia a ser removido.
            printf("%d\n", minutos[diaADeletar]); // imprimindo a quantidade de minutos que foram deletados

            free((*bancodedados)[diaADeletar]); // liberando memória do banco de dados do dia que foi deletado

            // recomeçar a contagem a partir do dia que foi deletado (tanto do banco quanto dos minutos)
            for (int i = diaADeletar; i < quantDias; i++){
                (*bancodedados)[i] = (*bancodedados)[i+1];
                minutos[i] = minutos[i+1];
            }

            // reorganizar o tamanho dos arrays.
            quantDias--; // diminuindo a quantidade de dias.
            (*bancodedados) = realloc((*bancodedados), quantDias*sizeof(int *)); // a quantidade de dias.
            minutos = realloc(minutos, quantDias * sizeof(int)); // a quant de minutos.
        }

        // maior número de piscadas em 1 minuto em determinado dia.
        if (t == 3){
            scanf("%d%*c", &diaMaiorPiscada);

            for (int i = 0; i < minutos[diaMaiorPiscada]; i++){
                if (i == 0) quantPiscadas = (*bancodedados)[diaMaiorPiscada][i];
                else{
                    if((*bancodedados)[diaMaiorPiscada][i] > quantPiscadas){
                        quantPiscadas = (*bancodedados)[diaMaiorPiscada][i];
                    }
                }
            }

            printf("%d\n", quantPiscadas);
        }

        // qual foi o maior número de piscadas em determinado minuto comparando esse mesmo minuto em todos os dias.
        // atenção: nem todos os dias vamos ter a mesma quantidade de minutos.
        // por conta disso, devemos verificar se aquele dia possui uma quantidade maior ou igual a aquele minuto em específico.
        if (t == 4){
            scanf("%d%*c", &minutoAComparar);
            int quantPiscadas = 0;

            for (int i = 0; i < quantDias; i++){
                if (minutos[i] > minutoAComparar){
                    if ((*bancodedados)[i][minutoAComparar] > quantPiscadas) quantPiscadas = (*bancodedados)[i][minutoAComparar];
                }
            }
            printf("%d\n", quantPiscadas);
        }
    }
}


int main(){
    int **bancoDedados = NULL; // matriz que ainda não foi alocada nada até o momento.
    informacoesColetadas(&bancoDedados); // passando o endereço dessa matriz.
    return 0;
}