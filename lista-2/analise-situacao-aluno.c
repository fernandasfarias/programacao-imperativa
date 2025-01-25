#include <stdio.h> 

int main(void){
    float media; int num_aulas, num_faltas, presenca;

    scanf("%f %d %d", &media, &num_aulas, &num_faltas);

    presenca = num_aulas - num_faltas;

    if (presenca >= 0.75*num_aulas && media >= 5){
        printf("APROVADO\n");
    }

    else if (presenca >= 0.5*num_aulas && media >= 7){
        printf("APROVADO\n");
    }

    else {
        printf("REPROVADO\n");
    }
    return 0;
}
