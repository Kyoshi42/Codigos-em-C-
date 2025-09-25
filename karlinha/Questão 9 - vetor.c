#include <stdio.h>
int main (){
    int n, i;
    int v1[5], v2[5], v3[10];
    
    printf("Digite 5 valores para o primeiro vetor: ");
    for (i=0;i<5;i++){
        scanf("%d",&v1[i]);
    }
    printf("Digite 5 valores para o segundo vetor: ");
    for (i=0;i<5;i++){
        scanf("%d",&v2[i]);
    }
    for (int i = 0; i < 5; i++) {
        v3[2*i] = v1[i];    
        v3[2*i + 1] = v2[i]; 
    }
    printf("Vetor intercalado:\n");
    for (i=0;i<10;i++){
        printf("%d ",v3[i]);
    }
    printf("\n");   
    return 0;
}    
    