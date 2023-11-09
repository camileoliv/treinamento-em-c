#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    
    int numero[6];
    int i, tamanho=6,parCount=0,imparCount=0;

    for (i = 0; i < tamanho; i++)
    {
    printf("Digite o %iº número: ",i+1);
    scanf("%d", &numero[i]);
    
     if (numero[i] %2 ==0)
    {
        parCount ++;
    } else {
        imparCount ++;
    }
    
    }

    printf("Pares: %d \n",parCount);
    printf("Ímpares: %d \n",imparCount);

    return 0;
}