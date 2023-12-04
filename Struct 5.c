#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    struct endereco
    {
        char rua[200];
        char bairro[200];
        char numero[200];
        char cidade[200];
        char estado[200];
    };

    struct dados_pessoa
    {
        char nome[200], matricula[200];
        char dataDeAdmissao[200];
        struct endereco endereco;
    };

    struct dados_cliente
    {
        char nome[200];
        char dataDeNascimento[200];
        struct endereco endereco;
    };

    int i;
    int linha = 2;
    int codigo;
    struct dados_pessoa funcionario[linha];
    struct dados_cliente cliente[linha];

    printf("Você é funcionário ou cliente?\n");
    printf("1- Funcionário.\n");
    printf("2- Cliente.\n");
    printf("Resposta: ");
    scanf("%d", &codigo);

    system("cls || clear");

    fflush(stdin);

    switch (codigo)
    {
    case 1:

        for (i = 0; i < linha; i++)
        {
            printf("%° funcionário.\n", i + 1);
            printf("Seu nome: ");
            gets(funcionario[i].nome);

            printf("Data de admissão: ");
            gets(funcionario[i].dataDeAdmissao);

            printf("Sua matrícula: ");
            gets(funcionario[i].matricula);

            printf("Endereço detalhado.\n");
            printf("Sua rua: ");
            gets(funcionario[i].endereco.rua);

            printf("Seu número: ");
            gets(funcionario[i].endereco.numero);

            printf("Seu bairro: ");
            gets(funcionario[i].endereco.bairro);

            printf("Sua cidade: ");
            gets(funcionario[i].endereco.cidade);

            printf("Seu estado: ");
            gets(funcionario[i].endereco.estado);

            printf("\n");

            system("cls||clear");
        }

        for (i = 0; i < linha; i++)
        {
            printf("Dados do %d° funcionário!\n", i + 1);

            printf("Nome: %s \n", funcionario[i].nome);
            printf("Data de Admissão: %s \n", funcionario[i].dataDeAdmissao);
            printf("Matrícula: %s \n", funcionario[i].matricula);
            printf("Rua: %s \n", funcionario[i].endereco.rua);
            printf("Número: %s \n", funcionario[i].endereco.numero);
            printf("Bairro: %s \n", funcionario[i].endereco.bairro);
            printf("Cidade: %s \n", funcionario[i].endereco.cidade);
            printf("Estado: %s \n", funcionario[i].endereco.estado);

            printf("\n");
        }

        break;

    case 2:
        for (i = 0; i < linha; i++)
        {

            printf("%d° cliente.\n", i + 1);
            printf("Seu nome: ");
            gets(cliente[i].nome);

            printf("Data de nascimento: ");
            gets(cliente[i].dataDeNascimento);

            printf("Endereço detalhado.\n");
            printf("Sua rua: ");
            gets(cliente[i].endereco.rua);

            printf("Seu número: ");
            gets(cliente[i].endereco.numero);

            printf("Seu bairro: ");
            gets(cliente[i].endereco.bairro);

            printf("Sua cidade: ");
            gets(cliente[i].endereco.cidade);

            printf("Seu estado: ");
            gets(cliente[i].endereco.estado);

            printf("\n");

            system("cls||clear");
        }

        for (i = 0; i < linha; i++)
        {
            printf("Dados do %d° cliente!\n", i + 1);

            printf("Nome: %s \n", cliente[i].nome);
            printf("Data de nascimento: %s \n", cliente[i].dataDeNascimento);
            printf("Rua: %s \n", cliente[i].endereco.rua);
            printf("Número: %s \n", cliente[i].endereco.numero);
            printf("Bairro: %s \n", cliente[i].endereco.bairro);
            printf("Cidade: %s \n", cliente[i].endereco.cidade);
            printf("Estado: %s \n", cliente[i].endereco.estado);

            printf("\n");
        }
    default:
        break;
    }

    return 0;
}