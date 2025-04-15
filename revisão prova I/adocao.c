#include <stdio.h>

int main(void){
    int idade_adotante, idade_adotando; 
    char irmao_ascendente, adocao_conjunta, uniao_estavel, pais_desconhecidos, consentimento_pais, consetimento_crianca;

    scanf("%d\n", &idade_adotante);
    scanf("%c\n", &irmao_ascendente);
    scanf("%c\n", &adocao_conjunta);
    scanf("%c\n", &uniao_estavel);
    scanf("%d\n", &idade_adotando);
    scanf("%c\n", &pais_desconhecidos);
    scanf("%c\n", &consentimento_pais);
    scanf("%c\n", &consetimento_crianca);


    if (idade_adotante < 18){
        printf("Nao pode adotar");
    }
    else if (irmao_ascendente == 'S'){
        printf("Nao pode adotar");
    }
    else if (adocao_conjunta == 'S' && uniao_estavel == 'N'){
        printf("Nao pode adotar");
    }
    else if (idade_adotante - idade_adotando < 16){
        printf("Nao pode adotar");
    }
    else if (pais_desconhecidos == 'N' && consentimento_pais == 'N'){
        printf("Nao pode adotar");
    }
    else if(idade_adotando > 12 && consetimento_crianca == 'N'){
        printf("Nao pode adotar");
    }
    else {
        printf("Pode adotar");
    }

    return 0;
}
