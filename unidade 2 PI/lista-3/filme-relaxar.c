#include <stdio.h>

int main(){
    char gen1, gen2, gen3, gen4, gen5, gen6;
    int nota1, nota2, nota3, nota4, nota5, nota6, pes1, pes2, pes3, totalLista1=0, totalLista2=0;

    scanf("%*s%*c%*c");

    scanf("%c%*s%d%*c", &gen1, &nota1);
    scanf("%c%*s%d%*c", &gen2, &nota2);
    scanf("%c%*s%d%*c%*c", &gen3, &nota3);

    scanf("%*s%*c%*c");

    scanf("%c%*s%d%*c", &gen4, &nota4);
    scanf("%c%*s%d%*c", &gen5, &nota5);
    scanf("%c%*s%d%*c%*c", &gen6, &nota6);

    scanf("acao: %d%*c", &pes1);
    scanf("comedia: %d%*c", &pes2);
    scanf("suspense: %d%*c", &pes3);

    // calculando o total dos filmes da lista 1:
        // quando o gênero 1 for igual a 'a'.
    if (gen1 == 'a'){
        totalLista1 += nota1 * pes1;
        if (gen2 == 'c'){
            totalLista1 += nota2 * pes2;
            totalLista1 += nota3 * pes3;
        }
        else{
            totalLista1 += nota2 * pes3;
            totalLista1 += nota3 * pes2;
        }
    }

    // caso o gênero 1 seja diferente de a 
    else if (gen1 != 'a'){
        if (gen1 == 'c'){
            totalLista1 += nota1 * pes2;
            if (gen2 == 'a'){
                totalLista1 += nota2 * pes1;
                totalLista1 += nota3 * pes3;
            }
            else{
                totalLista1 += nota2 * pes3;
                totalLista1 += nota3 * pes2;
            }
        }
        else if(gen1 == 's'){
            totalLista1 += nota1 * pes3;
            if (gen2 == 'a'){
                totalLista1 += nota2 * pes1;
                totalLista1 += nota3 * pes2;
            }
            else{
                totalLista1 += nota2 * pes2;
                totalLista1 += nota3 * pes1;
            }
        }
    }

    // calculando o total de filmes da lista 2
    if (gen4 == 'a'){
        totalLista2 += nota4 * pes1;
        if (gen5 == 'c'){
            totalLista2 += nota5 * pes2;
            totalLista2 += nota6 * pes3;
        }
        else{
            totalLista2 += nota5 * pes3;
            totalLista2 += nota6 * pes2;
        }
    }

    else if (gen4 != 'a'){
        if (gen4 == 'c'){
            totalLista2 += nota4 * pes2;
            if (gen5 == 'a'){
                totalLista2 += nota5 * pes1;
                totalLista2 += nota6 * pes3;
            }
            else{
                totalLista2 += nota5 * pes3;
                totalLista2 += nota6 * pes2;
            }
        }
        else if(gen4 == 's'){
            totalLista2 += nota4 * pes3;
            if (gen5 == 'a'){
                totalLista2 += nota5 * pes1;
                totalLista2 += nota6 * pes2;
            }
            else{
                totalLista2 += nota5 * pes2;
                totalLista2 += nota6 * pes1;
            }
        }
    }

    if ((pes1 + pes2 + pes3)!=0){
        float mediaLista1 = (float)totalLista1/(pes1+pes2+pes3);
        float mediaLista2 = (float)totalLista2/(pes1+pes2+pes3);
        if(mediaLista1 >= mediaLista2) printf("1\n");
        else if (mediaLista2 > mediaLista1) printf("2\n");
    }


    return 0;
}
