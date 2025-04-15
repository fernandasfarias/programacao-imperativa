#include <stdio.h>

int main() {
    char filme1, filme2, gen1, gen2, gen3, gen4, gen5, gen6;
    int nota1, nota2, nota3, nota4, nota5, nota6;
    int pes1, pes2, pes3;

    // Entrada para o primeiro filme e seus gêneros
    scanf("%c%*c", &filme1);
    scanf("%c %*s %d%*c", &gen1, &nota1);
    scanf("%c %*s %d%*c", &gen2, &nota2);
    scanf("%c %*s %d%*c", &gen3, &nota3);

    // Entrada para o segundo filme e seus gêneros
    scanf("%c%*c", &filme2);
    scanf("%c %*s %d%*c", &gen4, &nota4);
    scanf("%c %*s %d%*c", &gen5, &nota5);
    scanf("%c %*s %d%*c", &gen6, &nota6);

    // Entrada dos pesos
    scanf("acao: %d%*c", &pes1);
    scanf("comedia: %d%*c", &pes2);
    scanf("suspense: %d%*c", &pes3);

    // Verificando as entradas
    printf("Filme 1: %c\n", filme1);
    printf("Gen1: %c, Nota1: %d\n", gen1, nota1);
    printf("Gen2: %c, Nota2: %d\n", gen2, nota2);
    printf("Gen3: %c, Nota3: %d\n", gen3, nota3);

    printf("Filme 2: %c\n", filme2);
    printf("Gen4: %c, Nota4: %d\n", gen4, nota4);
    printf("Gen5: %c, Nota5: %d\n", gen5, nota5);
    printf("Gen6: %c, Nota6: %d\n", gen6, nota6);

    printf("Pesos:\n");
    printf("Ação: %d\n", pes1);
    printf("Comédia: %d\n", pes2);
    printf("Suspense: %d\n", pes3);

    return 0;
}
