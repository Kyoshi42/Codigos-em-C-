#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {3, 5, 9, 2},
        {7, 1, 8, 6},
        {4, 12, 0, 11},
        {10, 15, 14, 13}
    };

    int maior = matriz[0][0];
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }
    printf("Maior elemento: %d\n", maior);
    return 0;
}