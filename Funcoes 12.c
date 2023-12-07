#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

// escreva um programa que permita ler 3 notas de um aluno e informe por meio de funções a média
#define TAM 3

float calculo(float nota[])
{
    int i;
    float soma, media;
    for (i = 0; i < TAM; i++)
    {
        soma += nota[i];
    }
    media = soma / TAM;
    return media;
}

char* situacao(float media)
{
    char situacao[200];

    if (media > 7)
    {
        strcpy(situacao, "Aprovado");
    }
    else
    {
        strcpy(situacao, "Reprovado");
    }
    return situacao;
}

int main()
{
    float nota[TAM], mediaFinal;
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Sua %dª nota: ", i + 1);
        scanf("%f", &nota[i]);
    }

    mediaFinal = calculo(nota);

    printf("A sua média é: %.1f \n ", mediaFinal);
    printf("Situação: %s \n", situacao(mediaFinal));

    return 0;
}