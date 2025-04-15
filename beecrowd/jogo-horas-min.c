#include <stdio.h>

int main(){
    int h_1, m_1, h_2, m_2;

    scanf("%d %d %d %d", &h_1, &m_1, &h_2, &m_2);

    int total_horas, total_minutos;
    
    if (h_1 == h_2 && m_1 == m_2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if (m_1 > m_2 && h_1 > h_2){
        m_2 += 60; // somando 1 hora (pedi 60 minutos emprestado às horas)
        h_2--;  // retirando 1 hora 
    }

    total_minutos = m_2 - m_1;
    
    if (h_1 > h_2){
        h_2 += 24; // somando 24 horas
    }

    total_horas = h_2 - h_1;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total_horas, total_minutos);

    return 0;
}