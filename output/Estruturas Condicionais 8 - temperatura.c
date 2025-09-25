#include <stdio.h>

int main() {
    char tipo;
    double valor, convertido;

    printf("Digite a unidade de origem (C para Celsius, F para Fahrenheit): ");
    scanf(" %c", &tipo); 

    printf("Digite o valor da temperatura: ");
    scanf("%lf", &valor);

    if (tipo == 'C' || tipo == 'c') {
        convertido = (valor * 9.0 / 5.0) + 32.0;
        printf("%.2lf °C = %.2lf °F\n", valor, convertido);
    }
    else if (tipo == 'F' || tipo == 'f') {
        convertido = (valor - 32.0) * 5.0 / 9.0;
        printf("%.2lf °F = %.2lf °C\n", valor, convertido);
    }
    else {
        printf("Unidade invalida! Use C ou F.\n");
    }

    return 0;
}
