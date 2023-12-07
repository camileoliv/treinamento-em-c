#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
float conversor(float metro)
{

    return metro * 100;
}

int main()
{
    float metro, centimetros;

    printf("Dê um valor em metros: ");
    scanf("%f", &metro);

    centimetros = conversor(metro);

    printf("Convertido fica: %.1f centimetros\n", centimetros);

    return 0;
}