#include <stdio.h>

int main() {
    int v1[5], v2[5];
    int pE = 0;

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 numeros para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }

    for (int i = 0; i < 5; i++) {
        pE += v1[i] * v2[i];
    }

    printf("\nO produto escalar entre os dois vetores e: %d\n", pE);
    return 0;
}
    