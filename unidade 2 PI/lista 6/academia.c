#include <stdio.h>
#include <string.h>

struct cliente
    {
        char nome[50];
        int senha;
        char situacaoMensalidade;
    };

int main(){

    struct cliente clientes[100];
    char nomeAtual[50] = "";
    int numClientes = 100; // maximo de clientes que pode armazenar.
    int clientesRegistrados = 0, senhas[100]; // a quantidade de clientes que realmente foi registrada

    for (int i = 0; i < numClientes; i++){
        fgets(nomeAtual, 50, stdin); // lembrar que fgets() coloca um \n no final

        int tamanho = strlen(nomeAtual);
        nomeAtual[tamanho-1] = '\0';

        if (strcmp(nomeAtual, "SAIR") == 0) break; // comparando as duas strings

        strcpy(clientes[i].nome, nomeAtual); // copia o nomeAtual

        scanf("%d%*c", &clientes[i].senha);

        scanf("%c%*c", &clientes[i].situacaoMensalidade);

        clientesRegistrados++;
    }
    
    int totalSenhas = 0;
    while (1){
        scanf("%d%*c", &senhas[totalSenhas]);

        if (senhas[totalSenhas] == -1) break;

        totalSenhas++;
    }

    for (int i = 0; i < totalSenhas; i++){
        int senhaEncontrada = 0;

        for (int j = 0; j < clientesRegistrados; j++){
            if (clientes[j].senha == senhas[i]){
                senhaEncontrada = 1;

                if (clientes[j].situacaoMensalidade == 'P') printf("%s, seja bem-vindo(a)!\n", clientes[j].nome);
                else printf("Não está esquecendo de algo, %s? Procure a recepção!\n", clientes[j].nome);
            }
        }

        if (senhaEncontrada != 1) printf("Seja bem-vindo(a)! Procure a recepção!\n");
    }
    return 0;
}