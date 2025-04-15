#include <stdio.h>

int main(){
    int s_a, t_a, a_a, m_a;

    int s_i, t_i, a_i, m_i;

    int n_s, tanques_n, n_a, n_m;

    int cont_a=0, cont_i=0;

    scanf("%d %d %d %d%*c", &s_a, &t_a, &a_a, &m_a);
    scanf("%d %d %d %d%*c", &s_i, &t_i, &a_i, &m_i);
    scanf("%d %d %d %d", &n_s, &tanques_n, &n_a, &n_m);

    int total_s = s_i+n_s;

    int total_tanques = t_i+tanques_n;

    int total_a =  a_i+n_a;

    int total_m = m_i+n_m;

    if (s_a > total_s) cont_a++;
    else if (total_s > s_a) cont_i++;

    if (t_a > total_tanques) cont_a++;
    else if (total_tanques > t_a) cont_i++;

    if (a_a > total_a) cont_a++;
    else if (total_a > a_a) cont_i++;

    if (m_a > total_m) cont_a++;
    else if (total_m > m_a) cont_i++;

    if (cont_a >= 3) printf("Avancar\n");
    else if (cont_i >= 3) printf("Recuar\n");
    else printf("Permanecer\n");

    return 0;
}
