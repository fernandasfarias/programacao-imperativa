#include <stdio.h>

int main(void){
    int ang_1, ang_2; float ang_3;

    scanf("%d", &ang_1);
    scanf("%d", &ang_2);

    ang_3 = 180 - (ang_1+ang_2);

    printf("3o angulo=%.6f\n", ang_3);

    return 0;
}
