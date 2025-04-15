/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, 
e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), 
convertido para horas:minutos:segundos, conforme exemplo fornecido.

*/
#include <stdio.h>

int main(void){
    int segundos;

    scanf("%d", &segundos);

    // calcular a quantidade de minutos
    int minutos = segundos / 60;

    // calcular a quantidade de horas
    int horas = minutos / 60;

    // calcular a quantidade de segundos
    int segundos_2 = segundos % 60;

    // caso a quantidade minutos seja maior que 60, então o valor dos minutos será o resto da divisão dele por 60
    if (minutos > 60){
        int minutos_2 = minutos % 60;
        printf("%i:%i:%i\n", horas, minutos_2, segundos_2);
    }

    // caso contrário, será ele próprio
    else{
        printf("%i:%i:%i\n", horas, minutos, segundos_2); 
    }

    return 0;

}
