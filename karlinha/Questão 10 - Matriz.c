#include <stdio.h>
int main() {
    int i, j, matriz1[3][3], matriz2[3][3], matrizSoma[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz 1 na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz 2 na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("Matriz resultante da soma:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}