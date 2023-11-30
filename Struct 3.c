#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    struct dados_pessoa
    {
        char nome[200];
        int idade;
        float nota[2];
    };

    int i, j;
    int linha = 2;
    float media[linha], soma;
    struct dados_pessoa aluno[linha];

    for (i = 0; i < linha; i++)
    {
        printf("Seu nome: ");
        gets(aluno[i].nome);

        printf("Sua idade: ");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Sua %i nota: ", j + 1);
            scanf("%f", &aluno[i].nota[j]);

            soma += aluno[i].nota[j];
        }

        media[i] = soma / 2;
        soma = 0;
        fflush(stdin);

        system("cls||clear");
    }

    for (i = 0; i < linha; i++)
    {
        printf("Nome: %s \n", aluno[i].nome);
        printf("Idade: %i \n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%dª nota: %.1f \n", j + 1, aluno[i].nota[j]);
        }
        printf("Sua média: %.1f \n\n", media[i]);
    }

    return 0;
}