#include <stdio.h>

int main(){
    int n, f, niveis, nivel;

    scanf("%d %d", &n, &f);

    int frequencia[n];

    for (int i = 0; i < n; i++){
        frequencia[i] = 0;
    }

    for (int i = 0; i < f; i++){
        scanf("%d%*c", &niveis);

        for (int j = 0; j < niveis; j++){
            scanf("%d%*c", &nivel);
            frequencia[nivel-1]++;
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", frequencia[i]);
    }
    return 0;
}