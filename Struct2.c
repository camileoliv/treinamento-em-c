#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

    struct dados_pessoa
    {
        char nome[200], data[200], rg[200], cpf[200];
    };

int main()
{
    int linha=5;
    int i;
    struct dados_pessoa usuario[linha];

    for ( i = 0; i < linha; i++)
    {

    printf("Seu nome: ");
    gets(usuario[i].nome);

    printf("Sua data de nascimento: ");
    gets(usuario[i].data);

    printf("Seu RG: ");
    gets(usuario[i].rg);

    printf("Seu CPF: ");
    gets(usuario[i].cpf);

    system("cls||clear");

    }
    
    for ( i = 0; i < linha; i++)
    {
        printf("Nome: %s \n",usuario[i].nome);
        printf("Data de Nascimento: %s \n",usuario[i].data);
        printf("RG: %s \n",usuario[i].rg);
        printf("CPF: %s \n",usuario[i].cpf);
    }
    

    return 0;
}