#include <stdio.h>
// caso utilizando o while
int main(){

    int number;

    number = 1;
    while(number<=100){
        if(number%2==0) printf("%d\n", number);
        number++;
    }

    return 0;
}