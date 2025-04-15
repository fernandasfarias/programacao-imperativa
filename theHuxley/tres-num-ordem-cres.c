#include <stdio.h>

int main(){
    int num_1, num_2, num_3;

    scanf("%d", &num_1);
    scanf("%d", &num_2);
    scanf("%d", &num_3);

    if (num_1 < num_2 && num_1 < num_3){
        printf("%d\n", num_1);
        if (num_2 < num_3){
            printf("%d\n", num_2);
            printf("%d\n", num_3);
        }
        else{
            printf("%d\n", num_3);
            printf("%d\n", num_2);
        }
    }

    else if (num_2 < num_1 && num_2 < num_3){
        printf("%d\n", num_2);
        if (num_1 < num_3){
            printf("%d\n", num_1);
            printf("%d\n", num_3);
        }
        else{
            printf("%d\n", num_3);
            printf("%d\n", num_1);
        }
    }

    else{
        printf("%d\n", num_3);
        if (num_1 < num_2){
            printf("%d\n", num_1);
            printf("%d\n", num_2);
        }
        else{
            printf("%d\n", num_2);
            printf("%d\n", num_1);
        }
    }
    return 0;
}