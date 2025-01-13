#include <stdio.h>

int main(void){
    float altura; int idade, num_brinquedos = 0;

    scanf("%f %d", &altura, &idade);

    // brinquedo 1 
    if (altura >= 150 && idade >= 12){
        num_brinquedos += 1;
    }
    
    //brinquedo 2
    if (altura >= 140 && idade >= 14){
        num_brinquedos += 1;
    }

    //brinquedo 3
    if(altura >= 170 || idade >= 16){
        num_brinquedos += 1;
    }

    printf("%d\n", num_brinquedos);
    return 0;
}
