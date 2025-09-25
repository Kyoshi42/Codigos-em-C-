#include <stdio.h>
int main (){
    int i, num;
    int fatorial = 1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if ( num < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    }
    else {
     for (i=1;i<=num;i++) {
            fatorial = fatorial * i;
        }
        printf("O fatorial do numero e: %d\n",fatorial);
    }
    return 0;
}    
    