#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{

    float nota[3], media, soma;
    char situacao;
    int i, tamanho=3;

    for (i = 0; i < tamanho; i++)
    {
    printf("Digite a %iª nota: ",i+1);
    scanf("%f", &nota[i]);
    soma += nota[i];

    }

    printf("\n Mostrando as notas\n");

    for (i = 0; i < tamanho; i++)
    {
    printf("%dª nota: %.1f \n",i+1, nota[i]);
    }
    
    media = soma / tamanho;

       situacao = media;

    if (situacao >= 7)
    {
        strcpy(situacao,"Aprovado!");
    } 
    else if(situacao >= 5) 
    {
        strcpy(situacao,"Recuperação.");
    } 
    else 
    {
        strcpy(situacao,"Reprovado!");
    }

    printf("Sua média é: %.2f \n",media);
    printf("Situação: %c \n",situacao);
    

    return 0;
}
