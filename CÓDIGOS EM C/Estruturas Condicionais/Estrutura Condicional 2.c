#include <stdio.h>
int main() {
    double coeficiente1, coeficiente2, coeficiente3;
    double raiz1, raiz2, delta;
    printf("Digite o valor do coeficiente 1: ");
    scanf("%lf", &coeficiente1);    
    printf("Digite o valor do coeficiente 2: ");
    scanf("%lf", &coeficiente2);
    printf("Digite o valor do coeficiente 3: ");
    scanf("%lf", &coeficiente3);
    delta = coeficiente2 * coeficiente2 - 4 * coeficiente1 * coeficiente3;
    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    }
    else {
        raiz1 = (-coeficiente2 + sqrt(delta)) / (2 * coeficiente1);
        raiz2 = (-coeficiente2 - sqrt(delta)) / (2 * coeficiente1);
        printf("A equacao possui duas raizes reais: %.4lf e %.4lf\n", raiz1, raiz2);
    }
    return 0;
}