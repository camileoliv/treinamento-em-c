#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    int tamanho = 5;
    int idade [tamanho], i;
    char nome [tamanho] [250];

    for ( i = 0; i < tamanho; i++)
    {
    
    fflush(stdin);

    printf("Digite o seu nome:\n");
    gets(nome[i]);

    printf("Digite a sua idade:\n");
    scanf("%d",&idade[i]);

    printf("\n");

    }
    system("cls || clear");
    
    printf("Dados finais dos participantes da pesquisa: \n");
    
    for ( i = 0; i < tamanho; i++)
    {

    printf("%s \n", nome[i]);

    fflush(stdin);

    printf("%d \n", idade[i]);



    printf("\n");

    }
    
    

return 0;
}