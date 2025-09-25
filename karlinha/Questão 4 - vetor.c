#include <stdio.h>
int main (){
    int v[20];
    int i, par = 0, impar = 0;
    for (i=0;i<20;i++){
        printf("Digite um valor:");
        scanf("%d",&v[i]);
    }
    for (i=0;i<20;i++){
        if (v[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impares: %d\n", impar);
    return 0;
}    
    