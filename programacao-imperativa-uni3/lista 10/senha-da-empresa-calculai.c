#include <stdio.h>
#include <string.h>

int main(){
    char nomeCompleto[51];
    char aniversario[11];
    char aniversario_formatado[9];
    char cidade[51];
    int idade;
    char senha[16];

    int i = 0;

    while(i < 5){
        int j = 0, pos = 0;

        scanf("%[^\n]%*c", nomeCompleto);
        if(strcmp(nomeCompleto, "SAIR") == 0) break;

        scanf("%[^\n]%*c", aniversario);
        scanf("%[^\n]%*c", cidade);
        scanf("%d%*c", &idade);

        // remover o / da data
        for (int i = 0; aniversario[i] != '\0'; i++){
            if(aniversario[i] != '/'){
                aniversario_formatado[j] = aniversario[i];
                j++;
            }
        }

        // gerar a primeira parte da senha (sem a idade ainda).
        for (int i = 0; i < 5; i++){
            senha[pos++] = nomeCompleto[i];
            if(i == 4) break;
            senha[pos++] = aniversario_formatado[i];
            if(cidade[i] == ''){
                senha[pos++] = cidade[i+1];
            }
            else{
                senha[pos++] = cidade[i];
            }
        }

        // gerar a segunda parte da senha
        sprintf(&senha[pos++], "%d", idade);

        printf("Nome: %s\n", nomeCompleto);
        printf("Data de Nascimento: %s\n", aniversario);
        printf("Cidade Natal: %s\n", cidade);
        printf("Idade: %d anos\n", idade);
        printf("Senha: %s\n\n", senha);

        i++;
    }

    return 0;
}