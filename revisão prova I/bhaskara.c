#include <stdio.h>
#include <math.h> // Necessário para sqrt()

int main() {
    double a, b, c;

    // Entrada dos coeficientes
    scanf("%lf %lf %lf", &a, &b, &c);

    // Cálculo de Delta
    double delta = (b * b) - (4 * a * c);

    // Caso o delta seja positivo (duas raízes reais)
    if (delta > 0) {
        double raiz_1 = (-b + sqrt(delta)) / (2.0 * a);
        double raiz_2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("A primeira raiz: %.2lf. A segunda raiz: %.2lf\n", raiz_1, raiz_2);
    }
    // Caso o delta seja zero (uma única raiz)
    else if (delta == 0) {
        double raiz = (-b) / (2.0 * a);
        printf("A única raiz: %.2lf\n", raiz);
    }
    // Caso o delta seja negativo (não há raízes reais)
    else {
        printf("Não há raízes reais\n");
    }

    return 0;
}