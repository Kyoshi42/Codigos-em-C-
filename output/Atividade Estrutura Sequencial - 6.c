#include <stdio.h>
int main(){
    double raio, area;
    double pi = 3.14159;
    printf("Digite o valor do raio do circulo:");
    scanf("%lf", &raio);
    area = pi * raio * raio;
    printf("Area = %.3lf\n", area);
    return 0;
}
