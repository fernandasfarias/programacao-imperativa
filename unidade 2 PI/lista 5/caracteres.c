#include <stdio.h>

int main(){

    int n;

    while (1){
    
        scanf("%d%*c", &n);

        if (n == 0) break;

        char palavra[n];

        scanf("%[^\n]", palavra);

        for (int i = n-1; i >= 0; i--){
            printf("%c", palavra[i]);
        }

        printf("\n");
    }

    return 0;
}