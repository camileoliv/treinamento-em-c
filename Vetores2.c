#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    int numero[5], i,maior=0,menor=9999;

    for (i = 0; i < 5; i++)
    {
    printf("Digite o %dº número: ", i+1);
    scanf("%d",&numero[i]);

    maior = numero[i] > maior? numero[i] : maior;
    menor = numero[i] < menor? numero[i] : menor;
    }  

    printf("A maior numero é: %d \n",maior);
    printf("O menor número é: %d \n",menor);

    return 0;
}
