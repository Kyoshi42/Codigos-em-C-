#include <stdio.h>
int main () {
    double A, B, C;
    double area_quadrado, area_triangulo, area_trapezio;
    printf("Digite o valor de A: ");   
    scanf("%lf", &A);
    printf("Digite o valor de B: ");  
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);
    area_quadrado = A * A;
    area_triangulo = (A * B) / 2;
    area_trapezio = ((A + B) * C) / 2;
    printf("Area do quadrado: %.2lf\n", area_quadrado);
    printf("Area do triangulo: %.2lf\n", area_triangulo);
    printf("Area do trapezio: %.2lf\n", area_trapezio);
    return 0;
}