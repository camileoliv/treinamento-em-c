#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 6

int par(int numero[])
{
    int i, pares = 0;
    for (i = 0; i < TAM; i++)
    {
        if (numero[i] % 2 == 0)
        {
            pares++;
        }
    }

        return pares;
}

int impar(int numero[])
{
    int i, impares = 0;
    for (i = 0; i < TAM; i++)
    {

        if (numero[i] % 2 != 0)
        {
            impares++;
        }
    }
        return impares;
}

int main()
{
    int numero[TAM], i, pares, impares;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }
    pares = par(numero);
    impares = impar(numero);

    printf("Pares: %d \n", pares);
    printf("Ímpares: %d \n", impares);

    return 0;
}