#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct {
    char nome[51];
    float valor;
    int quantidade;
} Produto;

Produto lista[MAX];
int total = 0;

void inserir(char nome[], float valor, int qtd) {
    for(int i = 0; i < total; i++) {
        if(strcmp(lista[i].nome, nome) == 0) {
            lista[i].quantidade += qtd;
            return;
        }
    }
    strcpy(lista[total].nome, nome);
    lista[total].valor = valor;
    lista[total].quantidade = qtd;
    total++;
}

void remover(char nome[], int qtd) {
    for(int i = 0; i < total; i++) {
        if(strcmp(lista[i].nome, nome) == 0) {
            lista[i].quantidade -= qtd;
            if(lista[i].quantidade == 0) {
                for(int j = i; j < total - 1; j++) {
                    lista[j] = lista[j + 1];
                }
                total--;
            }
            return;
        }
    }
}

void removerGrupo(float limite) {
    for(int i = 0; i < total; ) {
        if(lista[i].valor > limite) {
            for(int j = i; j < total - 1; j++) {
                lista[j] = lista[j + 1];
            }
            total--;
        }
        else {
            i++;
        }
    }
}

void consultar() {
    float soma = 0;
    for(int i = 0; i < total; i++) {
        soma += lista[i].valor * lista[i].quantidade;
    }
    printf("Atualmente a lista esta em R$%.1f\n\n", soma);
}

void procurar(char nome[]) {
    for(int i = 0; i < total; i++) {
        if(strcmp(lista[i].nome, nome) == 0) {
            printf("%s\n", lista[i].nome);
            printf("- %.1f\n", lista[i].valor);
            printf("- %d\n\n", lista[i].quantidade);
            return;
        }
    }
    printf("%s nao foi encontrado.\n\n", nome);
}

int main() {
    char comando[20];
    while(scanf("%s", comando) != EOF) {
        if(strcmp(comando, "INSERIR") == 0) {
            char nome[51];
            float valor;
            int qtd;
            scanf("%s %f %d", nome, &valor, &qtd);
            inserir(nome, valor, qtd);
        }
        else if(strcmp(comando, "REMOVER") == 0) {
            char nome[51];
            int qtd;
            scanf("%s %d", nome, &qtd);
            remover(nome, qtd);
        }
        else if(strcmp(comando, "REMOVERGRUPO") == 0) {
            float limite;
            scanf("%f", &limite);
            removerGrupo(limite);
        }
        else if(strcmp(comando, "CONSULTAR") == 0) {
            consultar();
        }
        else if(strcmp(comando, "PROCURAR") == 0) {
            char nome[51];
            scanf("%s", nome);
            procurar(nome);
        }
    }
    return 0;
}