#include <stdio.h>
#include <string.h>

struct cliente{
    char nome[50];
    int senha;
    char situacaoMensalidade;
};

int main(){

    struct cliente clientes[100];
    char nomeAtual[50] = "";
    int maxClientes = 100, senha = 0, clientesRegistrados = 0;

    for (int i = 0; i < maxClientes; i++){
        fgets(nomeAtual, 50, stdin);

        // retirar o \n do final da string 
        int tamanho = strlen(nomeAtual);
        nomeAtual[tamanho-1] = '\0';

        if (strcmp(nomeAtual, "SAIR") == 0) break;

        // Copiar a string capturada na estrutura Cliente
        strcpy(clientes[i].nome, nomeAtual);

        scanf("%d%*c", &clientes[i].senha);
        scanf("%c%*c", &clientes[i].situacaoMensalidade);

        clientesRegistrados++;
    }

    // Capturar um número indeterminado de senhas até digitarem -1 
    while (1){

        int senhaCadastrada = 0;

        scanf("%d%*c", &senha);

        if (senha == -1) break;

        for (int i = 0; i < clientesRegistrados; i++){
            if (clientes[i].senha == senha){
                senhaCadastrada = 1;
                if (clientes[i].situacaoMensalidade == 'P') printf("%s, seja bem-vindo(a)!\n", clientes[i].nome);
                else printf("Não está esquecendo de algo, %s? Procure a recepção!\n", clientes[i].nome);
            }
        }

        if (senhaCadastrada == 0) printf("Seja bem-vindo(a)! Procure a recepção!");
    }

    return 0;
}