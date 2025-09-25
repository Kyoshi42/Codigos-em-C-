#include <stdio.h>
int main (){
    int i, v[10];
    int num,busca;
    for (i=0;i<10;i++){
        printf("Digite um valor:");
        scanf("%d",&v[i]);
    }
    busca=0;
    printf("Digite um numero para verificar se ele esta presente no vetor:");
    scanf("%d",&num);
    for (i=0;i<10;i++){
        if (v[i] == num) {
            busca = busca +1;
        } 
    }
    if (busca == 0) {
        printf("O numero digitado nao esta presente no vetor.\n");
    } else {
            printf("O numero digitado esta presente no vetor.\n");
        }
    return 0;
}    
    