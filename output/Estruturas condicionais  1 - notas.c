#include <stdio.h>
int main()
{
    double nota1, nota2, notafinal;
    printf("Digite a nota do aluno no primeiro semestre:");
    scanf("%lf", &nota1);
    printf("Digite a nota do aluno no segundo semestre:");
    scanf("%lf", &nota2);
    notafinal = (nota1 + nota2) / 2;
    if (notafinal < 60)
    {
        printf("REPROVADO com nota: %.1lf\n", notafinal);
    }
    else
        {
            printf("APROVADO com nota: %.1lf\n", notafinal);
        }
    return 0;
}