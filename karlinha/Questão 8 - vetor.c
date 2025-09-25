#include <stdio.h>
int main (){
    int n, i;
    
    printf("Quantos elementos tera na sequencia? ");
    scanf("%d",&n);
    int v[n];

    v[0] = 0;
    if (n > 1){
        v[1] = 1;
        for (i=2;i<n;i++){
            v[i] = v[i-1] + v[i-2];
        }
    }
    printf("Sequencia de Fibonacci:\n");
    for (i=0;i<n;i++){ 
        printf("%d ",v[i]);
    }   
    printf("\n");    
    return 0;
}    
    