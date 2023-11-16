#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    int tamanho = 5;
    int numero[tamanho];
    int maior = 0, menor = 99999;
    int positivos = 0, negativos = 0;
    int pares = 0, impares = 0;
    int somaPares = 0, somaImpares = 0, somaNumero = 0;
    float mediaPares, mediaImpares, mediaFinal;

    // Pergunta inicial
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numero[i]);

        // Pares e Impares
        if (numero[i] % 2 == 0)
        {
            pares++;
            somaPares = somaPares + numero[i];
        }
        else
        {
            impares++;
            somaImpares = somaImpares + numero[i];
        }

        // Positivos e negativos
        if (numero[i] > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }

        // Maior ou menor
        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

        somaNumero+= numero[i];
    }

    // Media pares, impares e geral
    mediaPares = somaPares / (float)pares;
    mediaImpares = somaImpares / (float)impares;
    mediaFinal = somaNumero / (float)tamanho;

    system("cls||clear");

    // Exibindo resultados
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    printf("\n");
    printf("Quantidade de n�meros positivos: %d\n", positivos);
    printf("Quantidade de n�meros negativos: %d\n", negativos);
    printf("\n");
    printf("Quantidade de n�meros inseridos: %d\n", i);
    printf("\n");
    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);
    printf("\n");
    printf("M�dia de n�meros pares: %.2f\n", mediaPares);
    printf("M�dia impares: %.2f\n", mediaImpares);
    printf("M�dia final: %.2f\n", mediaFinal);
    printf("\n");

    printf("N�meros na ordem inversa: ");

    printf("\n");

    // Ordem inversa
    for (i = --tamanho; i >= 0; i--)
    {
        printf("%d \n", numero[i]);
        sleep(2);
    }

    return 0;
}