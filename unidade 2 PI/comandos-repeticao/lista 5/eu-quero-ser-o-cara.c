#include <stdio.h>

int main(){
    int n, f, a_i, k;
    
    scanf("%d %d", &n, &f);

    // defini um array para armazenar a frequencia de cada nivel
    int frequencia[n];

    // defini que cada nivel deve iniciar com a frequencia zerada
    for (int i = 0; i < n; i++){
        frequencia[i] = 0;
    }

    /*para cada amigo, preciso capturar a quantidade de niveis que ele consegue
    jogar e, a partir dessa quantidade, quais são são esses niveis. A partir desses
    niveis, irei armazenar a frequencia deles*/

    for (int i = 0; i < f; i++){
        scanf("%d%*c", &a_i);
        int quant = a_i;

        for (int j = 0; j < quant; j++){
            scanf("%d%*c", &a_i);
            frequencia[a_i - 1]++;
            }
    }

    // armazenar o *menor* valor da frequência em k
    for (int l = 0; l < n; l++){
        if (l == 0) k = frequencia[l];
        else 
        {
            if (frequencia[l] < k) k = frequencia[l];
        }
    }

    printf("The %d friends could finish the game %d times\n", f, k);
    return 0;
}