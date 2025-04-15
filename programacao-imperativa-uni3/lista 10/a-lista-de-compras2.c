#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

typedef struct{
    char nome[51];
    float valor;
    int quantidade;
} Produto;

Produto lista[MAX];
int total = 0;

void inserirProduto(char nome[], float valor, int quant){
    
}