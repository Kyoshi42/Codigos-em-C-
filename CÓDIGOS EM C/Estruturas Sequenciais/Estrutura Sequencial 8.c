#include <stdio.h>
int main () {
    double distancia, combustivel, consumo;
    printf("Digite a distancia percorrida em km: ");
    scanf("%lf", &distancia);  
    printf("Digite o combustivel gasto em litros: ");
    scanf("%lf", &combustivel);
    consumo = distancia / combustivel; 
    printf("O consumo medio do veiculo foi de %.2lf km/l\n", consumo);
    return 0;
}