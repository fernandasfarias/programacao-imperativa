#include <stdio.h>
#include <string.h>

int main(){
    char cadeiaReferencia[100], cadeiaTeste[100];
    int numCadeias, i = 0, mudanca = 0;

    scanf("%d", &numCadeias);

    while(i < numCadeias){
        scanf("%s", cadeiaReferencia);
        scanf("%s", cadeiaTeste);

        int tamanhoString = strlen(cadeiaReferencia);

        for (int j = 0; j < tamanhoString; j++){
            if ((cadeiaReferencia[j] == 'A' && cadeiaTeste[j] != 'T')){
                cadeiaTeste[j] = 'T';
                mudanca++;
            }

            else if (cadeiaReferencia[j] == 'T' && cadeiaTeste[j] != 'A'){
                cadeiaTeste[j] = 'A';
                mudanca++;
            }

            if (cadeiaReferencia[j] == 'C' && cadeiaTeste[j] != 'G'){
                cadeiaTeste[j] = 'G';
                mudanca++;
            }

            else if (cadeiaReferencia[j] == 'G' && cadeiaTeste[j] != 'C'){
                cadeiaTeste[j] = 'C';
                mudanca++;
            }
        }

        if (mudanca == 0) printf("COMPLEMENTARES\n");
        else{
            printf("NAO COMPLEMENTARES\n");
            printf("%s\n", cadeiaTeste);
        }

        i++;
        mudanca = 0;
    }

    return 0;
}