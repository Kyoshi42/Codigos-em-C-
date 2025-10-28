#include <stdio.h>
int main() {
    int duracaoSeg, horas, minutos, segundos;
    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracaoSeg);
    horas = duracaoSeg / 3600;
    minutos = (duracaoSeg % 3600) / 60;
    segundos = duracaoSeg % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}