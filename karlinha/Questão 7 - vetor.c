#include <stdio.h>
int main (){
    int i;
    int v[10];
    int inverso[10];

    printf("Digite 10 valores inteiros: ");
    for (i=0;i<10;i++){
        scanf("%d",&v[i]);
    }
    for (i=0;i<10;i++){
        inverso[i] = v[9 - i];
    }
    printf("Vetor original:\n");
    for (i=0;i<10;i++){
        printf("%d ",v[i]);
    }
    printf("\nVetor inverso:\n");
    for (i=0;i<10;i++){
        printf("%d ",inverso[i]);
    }
    printf("\n");
    return 0;
}    
    