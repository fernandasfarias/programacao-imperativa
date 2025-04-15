#include <stdio.h>

// aritmética de ponteiros

int main(){
    int num = 100;

    int *ptr = &num;

    int **pptr = &ptr;

    printf("%d\n", **pptr);
    return 0;
}