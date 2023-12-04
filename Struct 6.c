#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    struct dados_aluno
    {
        char nome[200], numeroDaTurma[200];
        int idade;
        float nota[2];
    };

    struct dados_professor
    {
        char nomeP[200], disciplina[2][200], turma[2][200];
    };

    int i, j;
    int codigo, soma;
    int linha = 3, coluna = 2;
    char situacao[linha][200];
    float media[coluna];

    struct dados_aluno aluno[linha];
    struct dados_professor professor[coluna];

    printf("Você é aluno ou professor? \n");
    printf("1- Aluno.\n");
    printf("2- Professor.\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        for (i = 0; i < linha; i++)
        {

            fflush(stdin);

            printf("Número da sua turma: ");
            gets(aluno[i].numeroDaTurma);

            printf("Nome: ");
            gets(aluno[i].nome);

            printf("Idade: ");
            scanf("%i", &aluno[i].idade);

            for (j = 0; j < 2; j++)
            {

                printf("%dª nota: ", j + 1);
                scanf("%f", &aluno[i].nota[j]);

                soma += aluno[i].nota[j];
            }

            media[i] = soma / 2;
            soma = 0;

            if (media[i] >= 7)
            {
                strcpy(situacao[i], "Aprovado.");
            }
            else
            {
                strcpy(situacao[i], "Reprovado.");
            }

            system("cls||clear");

            for (i = 0; i < linha; i++)
            {

                printf("Dados do %dº aluno!\n", i + 1);

                printf("Nome: %s \n", aluno[i].nome);
                printf("Idade: %d \n", aluno[i].idade);
                printf("Número da turma: %s \n", aluno[i].numeroDaTurma);
                printf("Média: %.1f \n", media[i]);
                printf("Situação: %s \n", situacao[i]);

                printf("\n");
            }

            break;

        case 2:

            for (i = 0; i < coluna; i++)
            {
                fflush(stdin);

                printf("Nome: ");
                gets(professor[i].nomeP);

                for (j = 0; j < 2; j++)
                {

                    printf("%ª disciplina: ", j + 1);
                    gets(professor[i].disciplina[j]);

                    printf("%ª turma: ", j + 1);
                    gets(professor[i].turma[j]);
                }

                printf("\n");
            }

            system("cls||clear");

            for (i = 0; i < coluna; i++)
            {

                printf("Dados do %dº professor!\n", i + 1);

                printf("Nome: %s \n", professor[i].nomeP);

                for (j = 0; j < coluna; j++)
                {

                    printf("%dª disciplina: %s \n", j + 1, professor[i].disciplina[j]);
                    printf("%dª turma: %s \n\n", j + 1, professor[i].turma[j]);
                }
            }
        }

        break;

    default:
        break;
    }

    return 0;
}