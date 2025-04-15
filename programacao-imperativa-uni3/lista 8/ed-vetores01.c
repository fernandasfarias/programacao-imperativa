#include <stdio.h>

void le_vetor(int a[], int qtd) {
	int i;
	for( i=0; i<qtd; i++ ) scanf("%d", &a[i]);
}

int preenche_vetor(int a[], int tam_a, int b[]) {
    int i = 0;
    while (i < tam_a){
        b[i] = a[i];
        i++;
    }
    return tam_a;
}

void exibe_vetor(int a[], int qtd) {
	int i;
	for( i=0; i<qtd; i++ ) printf("%d\n", a[i]);
}

int main(void) {
	int a[50], b[50], tam_a, tam_b;
	scanf("%d", &tam_a);
	le_vetor(a, tam_a);
	tam_b = preenche_vetor(a, tam_a, b); 
	exibe_vetor(b, tam_b);
	return 0;
}
