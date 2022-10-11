#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, velocidade_media;
    float distancia, litros;

    scanf("%d %d", &horas, &velocidade_media);
    distancia = horas * velocidade_media;
    litros = distancia / 12;
    printf("%.3f\n", litros);

    return 0;
}