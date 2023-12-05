#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void exibir()
{
    printf("A média dos números é: %d \n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls||clear");
}

float mediaFuncao(float n1, float n2)
{
    float resultado;
    resultado = (n1 + n2) / 2;
    return resultado;
}
int main()
{
    float n1, n2;
    float media;

    printf("Escreva o primeiro número: ");
    scanf("%d", &n1);

    printf("Escreva o segundo número: ");
    scanf("%d", &n2);

    limpaTela();

    media = mediaFuncao(n1, n2);

    exibir(media);

    return 0;
}