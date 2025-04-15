#include <stdio.h>

int main(){
    int pi, ai, q, af;

    scanf("%d", &pi);
    scanf("%d", &ai);
    scanf("%d", &q);
    scanf("%d", &af);

    for (int i = ai; i <= af; i++){
        printf("%d %d\n", i, pi);
        pi = pi * (1 + ((float)q/100));
    }

    return 0;
}