#include <stdio.h>

int main(void){
    int cv, ce, cs, fv, fe, fs, pontos_c, pontos_f;

    scanf("%d %d %d %d %d %d",&cv, &ce, &cs, &fv, &fe, &fs);

    pontos_c = cv*3 + ce;
    pontos_f = fv*3 + fe;

    if  (pontos_c > pontos_f){
        printf("C\n");
    }

    else if (pontos_f > pontos_c){
        printf("F\n");
    }

    else if (cs != fs){
        if (cs > fs){
            printf("C\n");
        }
        else{
            printf("F\n");
        }
    }
    
    else{
        printf("=\n");
    }
}
