#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    char telefone[15];
    int codigo;
} Contatos;

int main(){
    
    int numero;

    scanf("%d%*c", &numero);

    Contatos contato[numero];

    for (int i = 0; i < numero; i++){
        scanf("%[^\n]%*c", contato[i].nome);
        scanf("%[^\n]%*c", contato[i].telefone);
        scanf("%d%*c", &contato[i].codigo);
    }

    while(1){

        char nome[50];
        char primeiroNome[50];
        primeiroNome[0] = '\0';
        int nomesIguais = 0;

        scanf("%[^\n]%*c", nome);

        if (strcmp(nome, "#") == 0) break;

        // iterar por cada nome da lista para verificar se esse está lá
        for (int i = 0; i < numero; i++){

            // precisamos somente do primeiro nome
            int tamanhoNome = strlen(contato[i].nome);

            for (int j = 0; j < tamanhoNome; j++){
                if (contato[i].nome[j] == ' '){
                    primeiroNome[j] = '\0';
                    break;
                }
                else primeiroNome[j] = contato[i].nome[j];
            }

            if (strcmp(primeiroNome, nome) == 0){
                nomesIguais++;
                printf("Nome: %s\n", contato[i].nome);
                printf("Numero: %s\n", contato[i].telefone);
                if (contato[i].codigo == 1) printf("Vinculo: Familia\n\n");
                else if (contato[i].codigo == 2) printf("Vinculo: Faculdade\n\n");
                else if (contato[i].codigo == 3) printf("Vinculo: Amigo\n\n");
            }
        }
        

        if (nomesIguais == 0) printf("%s nao foi cadastrado\n\n", nome);

    }
    return 0;
}