#include <stdio.h>
// quantidade de números positivos e a media desses números positivos
int main(){
    float numero, soma=0;
    int i, positivos=0;

    for (i=1; i<=6; i++){
        scanf("%f%*c", &numero);
        if (numero>0){
            positivos++;
            soma += numero;
        }
    }

    float media = soma/positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);

    return 0;
}