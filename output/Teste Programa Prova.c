#include <stdio.h> 
int main () {
    double preco, preco_final;
    printf("Digite o preco do produto: ");
    scanf("%lf", &preco);
    if (preco < 100) {
        preco_final = preco * 1.1;
        printf("O preco final inflacionado em 10% é: %.2lf\n ", preco_final);
    }
    else { 
        preco_final = preco * 1.2;
        printf("O preco final inflacionado em 20% é: %.2lf\n ", preco_final);
    }
    return 0;
}