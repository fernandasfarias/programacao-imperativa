#include <stdio.h>

// caso utilizando o for
int main(){

    int number;
    for (number=1; number<=100; number++){
        if(number%2==0) printf("%d\n", number);
    }
    return 0;
}