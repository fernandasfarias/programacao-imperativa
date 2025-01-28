#include <stdio.h>

int main(){
    char tipo, area, justificativa;
    float horas;

    scanf("%c%*s%*c", &tipo);
    scanf("%f%*c", &horas);
    scanf("%c%*s%*c", &area);
    scanf("%c", &justificativa);

    // área de computação
    if (area == 'c'){
        if ((tipo == 'c' || tipo == 'm') && horas >= 12) printf("ACEITA\n");
        else if ((tipo == 's' || tipo == 'p') && horas >= 1)  printf("ACEITA\n");
        else printf ("REJEITADA\n");
        }
    
    // outras áreas
    else {
        if (justificativa == 'S'){
            if ((tipo == 'c' || tipo == 'm') && horas >= 12) printf("ACEITA\n");
            else if ((tipo == 's' || tipo == 'p') && horas >= 1)  printf("ACEITA\n");
            else printf("REJEITADA\n");
        }

        else printf("REJEITADA\n");
    }
    return 0;
}
