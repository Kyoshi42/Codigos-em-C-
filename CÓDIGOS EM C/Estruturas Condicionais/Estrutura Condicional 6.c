#include <stdio.h>
int main() {
    double glicose;
    printf("Digite o valor da glicose do paciente:");
    scanf("%lf", &glicose);
    if (glicose <= 100)
    {
        printf("Normal = %.2lf mg/dL\n. Valor de referencia: 69 a 100mg/dL\n", glicose);
    }
    else if (glicose <= 140) {
        printf("Elevada (Pré-Diabetes)= %.2lf mg/dL\n. Valor de referencia: 101 a 140mg/dL\n", glicose);
    }
   if (glicose > 140) {
        printf("Diabetes = %.2lf mg/dL\n. Valor de referencia: > 140mg/dL\n", glicose);
    }
    return 0;
}   