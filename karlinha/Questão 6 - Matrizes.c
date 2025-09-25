#include <stdio.h>
int main () {
    int matriz[3][3], i, j;
    int somaP = 0, somaS = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento a%d%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        somaP += matriz [i][i];
        somaS += matriz [i][2 - i];
    }
    printf("Soma da diagonal principal: %d\n", somaP);
    printf("Soma da diagonal secundaria: %d\n", somaS);
    return 0;
}