#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

    struct dados_pessoa
    {
        char nome[200],autor[200],categoria[200];
        float preco;
    };

int main()
{
    int linha=3;
    int i;
    struct dados_pessoa leitor[linha];

    for ( i = 0; i < linha; i++)
    {

    printf("Digite o nome do livro: ");
    gets(leitor[i].nome);
    
    printf("Digite o autor do livro: ");
    gets(leitor[i].autor);
    
    printf("Digite a categoria  do livro: ");
    gets(leitor[i].categoria);

    printf("Preço: ");
    scanf("%f",&leitor[i].preco);

    system("cls||clear");

    fflush(stdin);

    }

    for ( i = 0; i < linha; i++)
    {
        
    printf("Nome: %s \n",leitor[i].nome);
    printf("Autor: %s \n",leitor[i].autor);
    printf("Categoria: %s \n", leitor[i].categoria);
    printf("Preço: %.1f \n", leitor[i].preco);

    }
    
    
    return 0;
}