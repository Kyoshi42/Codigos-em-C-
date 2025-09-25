#include <stdio.h>

int main() {
    char nome[50];
    double valorHora, horas, pagamento;

    printf("Digite o nome do funcionario:\n");
    scanf("%s", nome);
    printf("Digite o valor da hora trabalhada:\n");
    scanf("%lf", &valorHora);
    printf("Digite o numero de horas trabalhadas no mes:\n");
    scanf("%lf", &horas);

    pagamento = valorHora * horas;

    printf("O pagamento de %s é de %.2lf\n", nome, pagamento);

    return 0;
}