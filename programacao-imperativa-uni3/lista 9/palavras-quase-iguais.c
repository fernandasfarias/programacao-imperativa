#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void palavrasQuaseIguais(char palavra1[], char palavra2[]){

    int freqLetrasPalavra1[26];
    int freqLetrasPalavra2[26];

    // garantir que os dois arrays sejam inicializados com zero.
    for (int i = 0; i < 26; i++){
        freqLetrasPalavra1[i] = 0;
        freqLetrasPalavra2[i] = 0;
    }

    int tamanho1 = strlen(palavra1);
    for(int i = 0; i < tamanho1; i++){
        freqLetrasPalavra1[palavra1[i] - 'a']++; // guardar a frequencia de cada letra na sua devida posição no alfabeto.
    }

    int tamanho2 = strlen(palavra2);
    for(int i = 0; i < tamanho2; i++){
        freqLetrasPalavra2[palavra2[i] - 'a']++;
    }

    int somaCaracteresDiferentes = 0;
    for (int i = 0; i < 26; i++){
        if (freqLetrasPalavra1[i] != freqLetrasPalavra2[i]){
            if (freqLetrasPalavra1[i] == 0 && freqLetrasPalavra2[i] > 0){
                somaCaracteresDiferentes += freqLetrasPalavra2[i];
            }

            else if (freqLetrasPalavra1[i] > 0 && freqLetrasPalavra2[i] == 0){
                somaCaracteresDiferentes += freqLetrasPalavra1[i];
            }
            
            else if (freqLetrasPalavra1[i] > 0 && freqLetrasPalavra2[i] > 0){ 
                somaCaracteresDiferentes += abs(freqLetrasPalavra1[i] - freqLetrasPalavra2[i]);
            }
        }
    }

    if (somaCaracteresDiferentes == 0) printf("String A is almost equal to string B\n");
    else printf("They differ by %d characters\n", somaCaracteresDiferentes);
}

int main(){
    char str1[100000], str2[100000];
    scanf("%s%*c", str1);
    scanf("%s%*c", str2);
    palavrasQuaseIguais(str1, str2);
    return 0;
}