#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    float nota[3];
    int i;
    int tamanho =5;

    for (i = 0; i < tamanho; i++)
    {
    printf("Digite a %iª nota: ",i+1);
    scanf("%f", &nota[i]);  
    }

    printf("\n Mostrando as notas\n");

    for (i = 0; i < tamanho; i++)
    {
    printf("%dª nota: %.1f \n",i+1, nota[i]);
    }
    
    return 0;
} 