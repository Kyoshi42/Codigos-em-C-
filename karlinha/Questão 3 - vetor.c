#include <stdio.h>
int main (){
    int v[8];
    int i;
    double s = 0;
    for (i=0;i<8;i++){
        printf("Digite um valor:");
        scanf("%d",&v[i]);
    }
    for (i=0;i<8;i++){
        s += v[i];
    }
    printf("A media aritmetica dos valores é: %.2lf\n",s/8);
    return 0;
}
    
    