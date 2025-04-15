#include <stdio.h>

int main(){
    int d, r, l, p, g;
    int litros_viajem, dist_postos;

    scanf("%d %d %d %d %d", &d, &r, &l, &p, &g);

    litros_viajem = d/10;

    dist_postos = d/p;

    if (litros_viajem <= l){
        printf("Pode viajar.\n");
        printf("R$: %d", r);
    }

    else{
        for (int i=0; i < p; i++)
        {
            int autonomia_restante = (15 - (dist_postos/10))*10;
            if (autonomia_restante < dist_postos){
                r -= (r(15 - (dist_postos/10)));
            }
        }
        
        if (r < 0) printf("Nao pode viajar.");
        else{
            printf("Pode viajar.\n");
            printf("R$: %d", r);
        }
    }

    return 0;
}