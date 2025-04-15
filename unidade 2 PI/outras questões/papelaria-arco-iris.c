#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[51];
    int codigo;
    float preco;
    int quantEstoque;
    char categoria;
}Itens;

int main(){

    Itens item[100];
    int i = 0;

    while(1){

        scanf("%[^\n]", item[i].nome);

        if (strcmp(item[i].nome, "SAIR") == 0) break;

        scanf("%d%*c", &item[i].codigo);
        scanf("%f%*c", &item[i].preco);
        scanf("%d%*c", &item[i].quantEstoque);
        scanf("%c%*c", &item[i].categoria);

        i++;
        if (i == 100) break;
    }

    int codigoPesquisa, estoqueAlterar, encontrado = 0;

    while(1){

        scanf("%d", &codigoPesquisa);

        if (codigoPesquisa == -1) break;

        scanf("%d", &estoqueAlterar);

        for (int j = 0; j <= i; j++){

            if (item[j].codigo == codigoPesquisa && estoqueAlterar == 0){
                encontrado = 1;
                printf("Nome: %s\n", item[j].nome);
                printf("Código: %d\n", item[j].codigo);
                printf("Preço: %f\n", item[j].preco);
                printf("Quantidade em Estoque: %d\n", item[j].quantEstoque);
                printf("Categoria: %c\n", item[j].categoria);
            }

            else if (item[j].codigo == codigoPesquisa && estoqueAlterar != 0){
                
                encontrado = 1;

                int estoqueAlterado = item[j].quantEstoque + estoqueAlterar;

                if (estoqueAlterado < 0){
                    printf("Estoque insuficiente\n");
                }

                else{
                    item[j].quantEstoque = estoqueAlterado;

                    printf("Estoque alterado com sucesso!\n\n");
                    printf("Nome: %s\n", item[j].nome);
                    printf("Código: %d\n", item[j].codigo);
                    printf("Preço: %f\n", item[j].preco);
                    printf("Quantidade em Estoque: %d\n", item[j].quantEstoque);
                    printf("Categoria: %c\n", item[j].categoria);
                }
            }

        }

        if (encontrado == 0) printf("Digite um código válido!\n");
        encontrado = 0;
    }

    return 0;
}