#include <stdio.h>
int main (){
    int v[15];
    int i;
    for (i=0;i<15;i++){
        printf("Digite um valor:");
        scanf("%d",&v[i]);
    }
    printf("O menor valor informado foi: %d",v[0]);
    for (i=1;i<15;i++){
        if (v[i]>v[0]){
            v[0]=v[i];
        }
    }  
    printf("\nO maior valor informado foi: %d",v[0]);
    for (i=1;i<15;i++){
        if (v[i]<v[0]){
            v[0]=v[i];
        }
    }
    return 0;
}