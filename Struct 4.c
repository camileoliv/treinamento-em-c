#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    struct dados_pessoa
    {
        char nome[200], cpf[200];
        int idade;
    };

    int codigo;
    struct dados_pessoa funcionario;
    struct dados_pessoa cliente;

    printf("Você é funcionário ou cliente? \n");
    printf("1- Para funcionário.\n");
    printf("2- Para cliente.\n");
    printf("Resposta: ");
    scanf("%d", &codigo);

    system("cls||clear");

    switch (codigo)
    {
    case 1:
        printf("Cadastre suas informações!\n");
        printf("\n");

        fflush(stdin);

        printf("Seu nome\n");
        printf("Resposta:");
        gets(funcionario.nome);

        printf("\n");

        printf("Sua idade\n");
        printf("Resposta:");
        scanf("%d", &funcionario.idade);

        fflush(stdin);

        printf("\n");

        printf("Seu CPF\n");
        printf("Resposta:");
        gets(funcionario.cpf);

        system("cls||clear");

        printf("Nome: %s\n",funcionario.nome);
        printf("Idade: %d\n",funcionario.idade);
        printf("CPF: %s\n",funcionario.cpf);

        break;

    case 2:

        fflush(stdin);

        printf("Cadastre suas informações!\n");
        printf("\n");

        printf("Seu nome\n");
        printf("Resposta:");
        gets(cliente.nome);

        fflush(stdin);

        printf("Sua idade\n");
        printf("Resposta:");
        scanf("%d", &cliente.idade);

        fflush(stdin);

        printf("Seu CPF: \n");
        printf("Resposta:");
        gets(cliente.cpf);

        system("cls||clear");

        printf("Nome: %s\n",cliente.nome);
        printf("Idade: %d\n",cliente.idade);
        printf("CPF: %s\n",cliente.cpf);

        break;

    default:
        break;
    }

    return 0;
}