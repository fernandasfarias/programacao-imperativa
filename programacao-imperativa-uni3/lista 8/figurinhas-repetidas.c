#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
	int n;
	int* elements;
} t_vector;

// preciso verificar quais figurinhas foram repetidas.
    // primeiramente, verifico a quantidade máxima de figurinhas. Ou seja, qual será o valor que irei percorrer.
t_vector repetidas(t_vector album, t_vector novas){
    int max;
    int index = 0;
    t_vector resultado;

    if (album.n > novas.n){
        max = novas.n;
    }
    else{
        max = album.n;
    }

    resultado.elements = (int*) malloc(max * sizeof(int));

    int i = 0, j = 0;
    while (i < album.n && j < novas.n){

        if (album.elements[i] == novas.elements[j]){
            resultado.elements[index] = album.elements[i];
            index++;
            i++;
            j++;
        }

        else if (album.elements[i] < novas.elements[j]){
            i++;
        }
        
        else{
            j++;
        }
    }

    resultado.n = index;
    return resultado;
} 

int main() {
	int i, j, k;
	t_vector album, novas, reps;
	scanf("%d", &album.n);
	album.elements = (int*)malloc((album.n+1)*sizeof(int));
	for(i = 0; i < album.n; i++){
		scanf("%d", &(album.elements[i]));
	}
	album.elements[i] = INT_MAX;
	
	scanf("%d", &novas.n);
	novas.elements = (int*)malloc((novas.n+1)*sizeof(int));
	for(i = 0; i < novas.n; i++){
		scanf("%d", &(novas.elements[i]));
	}
	novas.elements[i] = INT_MAX;
	
	reps = repetidas(album, novas);
	
	for(k = 0; k < reps.n-1; k++)
	  printf("%d ", reps.elements[k]);
	printf("%d\n", reps.elements[k]);
	
	free(reps.elements);
	free(album.elements);
	free(novas.elements);
	
	return 0;
}