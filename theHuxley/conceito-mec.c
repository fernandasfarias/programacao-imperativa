#include <stdio.h>

int main(){
    int quant_livros, quant_alunos, div;

    scanf("%d%*c", &quant_livros);
    scanf("%d", &quant_alunos);

    div = quant_alunos/quant_livros;

    if (div<= 8) printf("A\n");
    else if (div>=9 && div<=12) printf("B\n");
    else if (div>=13 && div<=18) printf("C\n");
    else printf("D\n");

    return 0;
}