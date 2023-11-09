#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    int numero[5], i,maior,menor;

    for (i = 0; i < 5; i++)
    {
    printf("Digite o %d número: ", i+1);
    scanf("%d",&numero[i]);
    }

    maior = numero [0] > numero [1]? numero [0] : numero [1];
    maior = maior >numero [2]? maior :numero [2];
    maior = maior >numero [3]? maior :numero [3];
    maior = maior >numero [4]? maior :numero [4];

    menor = numero [0] <numero [1]? numero [0] :numero [1];
    menor = menor <numero [2]? menor :numero [2];
    menor = menor <numero [3]? menor :numero [3];
    menor = menor <numero [4]? menor :numero [4];

    printf("A maior numero é: %d \n",maior);
    printf("O menor número é: %d \n",menor);


    return 0;
}