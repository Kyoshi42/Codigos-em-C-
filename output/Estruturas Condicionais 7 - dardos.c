#include <stdio.h>

int main() {
    double dardo1, dardo2, dardo3;
    double maior;
    int melhor_dardo;

    printf("Informe o 1º dardo: ");
    scanf("%lf", &dardo1);

    printf("Informe o 2º dardo: ");
    scanf("%lf", &dardo2);

    printf("Informe o 3º dardo: ");
    scanf("%lf", &dardo3);
    
    maior = dardo1;
    melhor_dardo = 1;

    if (dardo2 > maior) {
        maior = dardo2;
        melhor_dardo = 2;
    }
    if (dardo3 > maior) {
        maior = dardo3;
        melhor_dardo = 3;
    }

    printf("O maior foi o dardo %d: %.2lf\n", melhor_dardo, maior);

    return 0;
}
