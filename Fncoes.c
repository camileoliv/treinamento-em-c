#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void cabecalho()
{
    printf("\n=============================\n");
    printf("\tSenai");
    printf("\n=============================\n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls||clear");
}

int main()
{
    char nome[200];
    int idade;

    cabecalho(); // chamada da função
    printf("Digite um nome: ");
    gets(nome);
    limpaTela();

    cabecalho();
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    limpaTela();

    cabecalho();
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);

    return 0;
}