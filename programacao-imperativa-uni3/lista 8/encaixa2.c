#include <stdio.h>

int encaixa(int a, int b)
{
    if (b > a) return 0;

    while(b > 0){
        int restoDivA = a%10;
        int restoDivB = b%10;

        if (restoDivA != restoDivB){
            return 0;
        }

        a = a/10;
        b = b/10;

    }
    
    return 1;

}

int main(void) 
{
    int x, y;
    
    scanf("%d%d", &x, &y);
    while (x != -1) // lê enquanto x for diferente de -1
    {
        printf("%d\n", encaixa(x, y) );
        scanf("%d%d", &x, &y);
    }
	return 0;
}