#include <stdio.h>

struct Ator {
    int idade;
    int quantidade;
};

void leVetor(struct Ator v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
        scanf("%d%d", &v[i].idade, &v[i].quantidade);
}

void geraRel(struct Ator a[], int tamA, struct Ator b[], int tamB) {
    int i = 0, j = 0;
    
    while (i < tamA && j < tamB){

        if (a[i].idade < b[j].idade){
            printf("%d - %d\n", a[i].idade, a[i].quantidade);
            i++;
        }
        // se ele for menor que a idade atual em b, significa que esse valor não vai aparecer mais em b.

        else if (a[i].idade > b[j].idade){
            printf("%d - %d\n", b[j].idade, b[j].quantidade);
            j++;
        }

        else{
            printf("%d - %d\n", a[i].idade, a[i].quantidade+b[j].quantidade);
            i++;
            j++;
        }

    }

    // caso uma delas ainda não tiver sido percorrida totalmente:

    while (i < tamA){
        printf("%d - %d\n", a[i].idade, a[i].quantidade);
        i++;
    }
    while(j < tamB){
        printf("%d - %d\n", b[j].idade, b[j].quantidade);
        j++;
    }
}

int main()
{
    struct Ator grupoA[100], grupoB[100];
    int tamGrupoA, tamGrupoB;
    scanf("%d%d", &tamGrupoA, &tamGrupoB);
    leVetor(grupoA, tamGrupoA);
    leVetor(grupoB, tamGrupoB);
    geraRel(grupoA, tamGrupoA, grupoB, tamGrupoB);
    return 0;
}
