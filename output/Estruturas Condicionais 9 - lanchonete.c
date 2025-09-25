#include <stdio.h>

int main() {
    int codigo, quantidade;
    double preco, total;

    printf("Informe o codigo do produto (1 a 5): ");
    scanf("%d", &codigo);

    printf("Informe a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo == 1) {
        preco = 5.00;
    }
    else if (codigo == 2) {
        preco = 3.50;
    }
    else if (codigo == 3) {
        preco = 4.80;
    }
    else if (codigo == 4) {
        preco = 8.90;
    }
    else if (codigo == 5) {
        preco = 7.32;
    }
    else {
        printf("Codigo invalido!\n");
        return 1; // encerra o programa
    }

    total = preco * quantidade;

    printf("Valor a pagar: R$ %.2lf\n", total);

    return 0;
}
