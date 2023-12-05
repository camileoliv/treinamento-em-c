#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void tabuation (int n1) {
    int a;
    for ( a = 1; a < 10; a++)
    {
        printf("%i x %i = %i \n",n1, a, a* n1);
    }
    
} 

int main (){

int numero;

printf("Digite um número: ");
scanf("%d",&numero);

tabuation(numero);
    return 0;
}