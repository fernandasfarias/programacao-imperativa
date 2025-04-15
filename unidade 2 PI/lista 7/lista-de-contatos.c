#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char numero[15];
    int tipo;
} Contatos;

int main(){

    int quant;
    char nomeContatos[50], primeiroNome[50];

    scanf("%d%*c", &quant);
    Contatos contato[quant];

    for (int i = 0; i < quant; i++){
        scanf("%[^\n]%*c", contato[i].nome);
        scanf("%[^\n]%*c", contato[i].numero);
        scanf("%d%*c", &contato[i].tipo);
    }

    scanf("%[^\n]%*c", nomeContatos);

    while (strcmp(nomeContatos, "#") != 0)
    {
        primeiroNome[0] = '\0';
        int encontrado = 0;

        for (int i = 0; i < quant; i++){

            int tamanhoNome = strlen(contato[i].nome);

            for (int j = 0; j < tamanhoNome; j++){
                if (contato[i].nome[j] == ' '){
                    primeiroNome[j] = '\0';
                    break;
                }
                else primeiroNome[j] = contato[i].nome[j];
            }

            if (strcmp(primeiroNome, nomeContatos) == 0){
                encontrado++;
                printf("Nome: %s\n", contato[i].nome);
                printf("Numero: %s\n", contato[i].numero);
                if (contato[i].tipo == 1) printf("Vinculo: Familia\n\n");
                else if (contato[i].tipo == 2) printf("Vinculo: Faculdade\n\n");
                else if (contato[i].tipo == 3) printf("Vinculo: Amigo\n\n");
            }
        }

        if (encontrado == 0) printf("%s nao foi cadastrado\n\n", nomeContatos);


        scanf("%[^\n]%*c", nomeContatos);
    }
    

    return 0;
}
