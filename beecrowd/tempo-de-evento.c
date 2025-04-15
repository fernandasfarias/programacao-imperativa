#include <stdio.h>

int main(){
    int d_1, h_1, m_1, s_1;
    int d_2, h_2, m_2, s_2;

    // capturando o dia de início.
    scanf("Dia %d%*c", &d_1);
    scanf("%d : %d : %d%*c", &h_1, &m_1, &s_1);

    // capturando o dia de término.
    scanf("Dia %d", &d_2);
    scanf("%d : %d : %d\n", &h_2, &m_2, &s_2);

    // converter o dia 1 para segundos.
    int total_seg_1 = (d_1*86400) + (h_1*3600) + (m_1*60) + s_1;
    
    // converter o dia 2 para segundos.
    int total_seg_2 = (d_2*86400) + (h_2*3600) + (m_2*60) + s_2;

    // encontrar o total de segundos que compreende o intervalo entre esses dois dias
    int total_seg = total_seg_2 - total_seg_1;

    printf("%d dia(s)\n", total_seg/86400);
    printf("%d hora(s)\n", (total_seg%86400)/3600);
    printf("%d minuto(s)\n", (total_seg%3600)/60);
    printf("%d segundo(s)\n", total_seg%60);

    return 0;
}
