#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");

    int tamanho=5;
    int i;
    int numero[tamanho];

    for ( i = 0; i < tamanho; i++)
    {
        printf("Digite o %i° número: ",i+1);
        scanf("%i",&numero[i]);

        if (numero[i] < 0)
        {
            numero[i] = 0;
        }
        
    }

    system("cls||clear");

    for ( i = 0; i < tamanho; i++)
        {
            printf("%i° número apresentado: %i\n",i+1,numero[i]);
        }
        
    

    return 0;
}