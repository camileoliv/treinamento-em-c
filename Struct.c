#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

    struct dados_pessoa
    {
        char nome[200],cep[200];
        int idade;
    };

int main()
{

    struct dados_pessoa pessoa;

    printf("\nSolicitando os dados... \n");
    printf("Digite o seu nome: ");
    gets(pessoa.nome);

    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);

    fflush(stdin);

    printf("Escreva por extenso o seu endereço: ");
    gets(&pessoa.cep);

    printf("\nExibindo os dados... \n");
    printf("Nome: %s \n", pessoa.nome);
    printf("Idade: %d \n", pessoa.idade);
    printf("Endereço: %s \n", pessoa.cep);


    return 0;
}