#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int tamanho= 6;
    int i;
    int numero [tamanho];

    for ( i = 0; i < tamanho; i++)
    {
        do
        {
        printf("Digite o %iº número: \n",i+1);
        scanf("%d",&numero[i]);
        } while (numero[i] % 2 == 1);   
        
    }

    system("cls||clear");

    printf("Exibindo resultados!\n");

    for ( i = 5; i >= 0; i--)
    {
        printf("%d \n",numero[i]);
    }
    
    

    return 0;
}