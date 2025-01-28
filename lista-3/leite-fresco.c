#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == 0){
        int soma = b+c;
        int porcentagemB = (b*100)/soma;

        if(porcentagemB >= 75){
            float precoTotal = soma*3.60;
            printf("%.2f\n", precoTotal);
        }
        else{
            float precoTotal = soma*2.75;
            printf("%.2f\n", precoTotal);
        }
    }

    else if(b == 0){
        int soma = a+c;
        int porcentagemA = (a*100)/soma;

        if (porcentagemA >= 95){
            float precoTotal = soma*4.80;
            printf("%.2f\n", precoTotal);
        }
        else{
            float precoTotal = soma*2.75;
            printf("%.2f\n", precoTotal);
        }
    }

    else{
        int soma = a+b;
        int porcentagemA = (a*100)/soma;
        int porcentagemB = (b*100)/soma;

        if (porcentagemA >= 90){
            float precoTotal = soma*4.80;
            printf("%.2f\n", precoTotal);
        }
        else if (porcentagemA > 50 && porcentagemA < 90){
            float precoTotal = soma*3.60;
            printf("%.2f\n", precoTotal);
        }
        else if (porcentagemB >= 50){
            float precoTotal = soma*2.75;
            printf("%.2f\n", precoTotal);
        }
    }

    return 0;
}
