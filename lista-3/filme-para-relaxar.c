#include <stdio.h>

int main(){
    char filme1, filme2, gen1, gen2, gen3, gen4, gen5, gen6;
    int nota1, nota2, nota3, nota4, nota5, nota6, pes1, pes2, pes3, cont1 = 0, cont2 = 0;

     scanf("%c%*c", &filme1);  // Lê o nome do filme1
    scanf("%c%*s %d%*c", &gen1, &nota1);  // Lê o gênero e nota do filme1
    scanf("%c%*s %d%*c", &gen2, &nota2);  // Lê o gênero e nota do filme2
    scanf("%c%*s %d%*c", &gen3, &nota3);  // Lê o gênero e nota do filme3

    // Captura dos dados do segundo filme
    scanf("%c%*c", &filme2);  // Lê o nome do filme2
    scanf("%c%*s %d%*c", &gen4, &nota4);  // Lê o gênero e nota do filme4
    scanf("%c%*s %d%*c", &gen5, &nota5);  // Lê o gênero e nota do filme5
    scanf("%c%*s %d%*c", &gen6, &nota6);  // Lê o gênero e nota do filme6

    // Leitura dos pesos dos gêneros
    scanf("acao: %d", &pes1);
    scanf("comedia: %d", &pes2);
    scanf("suspense: %d", &pes3);

    // total lista 1
        // se o primeiro filme for igual ao primeiro gênero da lista
    if (gen1 == 'a'){
        cont1 += nota1 * pes1;
        if (gen2 == 'c'){
            cont1 += nota2 * pes2;
            cont1 += nota3 * pes3;
        }
        else{
            cont1 += nota2 * pes3;
            cont1 += nota3 * pes2;
        }
    }

        // se o primeiro filme não for igual ao primeiro gênero da lista
    if (gen1 != 'a'){
        if (gen1 == 'c'){
            cont1 += nota1 * pes2;
            if(gen2 == 'a'){
                cont1 += nota2 * pes1;
                cont1 += nota3 * pes3;
            }
            else{
                cont1 += nota2 * pes3;
                cont1 += nota3 * pes2;
            }
        }
        else{
            cont1 += nota1 * pes3;
            if (gen2 == 'a'){
                cont1 += nota2 * pes1;
                cont1 += nota3 * pes2;
            }
            else{
                cont1 += nota2 * pes2;
                cont1 += nota3 * pes1;
            }
        }
    }

    // Determinando para a lista 2
    if (gen4 == 'a'){
        cont2 += nota4 * pes1;
        if (gen5 == 'c'){
            cont2 += nota5 * pes2;
            cont2 += nota6 * pes3;
        }
        else{
            cont2 += nota5 * pes3;
            cont2 += nota6 * pes2;
        }
    }

    if (gen4 != 'a'){
        if (gen4 == 'c'){
            cont2 += nota4 * pes2;
            if(gen5 == 'a'){
                cont2 += nota5 * pes1;
                cont2 += nota6 * pes3;
            }
            else{
                cont2 += nota5 * pes3;
                cont2 += nota6 * pes2;
            }
        }
        else{
            cont2 += nota4 * pes3;
            if (gen5 == 'a'){
                cont2 += nota5 * pes1;
                cont2 += nota6 * pes2;
            }
            else{
                cont2 += nota5 * pes2;
                cont2 += nota6 * pes1;
            }
        }
    }

    float mediaLista1 = (float)cont1/(pes1+pes2+pes3);
    float mediaLista2 = (float)cont2/(pes1+pes2+pes3);

    if(mediaLista1 > mediaLista2) printf("1");
    else if (mediaLista2 > mediaLista1) printf("2");
    else printf("1");
    return 0;
}
