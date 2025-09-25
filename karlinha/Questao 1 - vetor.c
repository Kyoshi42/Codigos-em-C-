#include <stdio.h>
int main (){
    int i, n, soma;
    printf("Qual a quantidade de termos da sequencia?");
    scanf("%d", &n);
    int vetor[n];
    soma = 0;
    for (i=0; i<n;i++){
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("A soma dos numeros digitados e:\n");
    printf("%d\n", soma);
    return 0;
}