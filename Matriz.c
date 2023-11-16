#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    int numeros[2][2];
    int i,j;

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Elemento da linha %d coluna %d",i+1,j+1);
            scanf("%d",&numeros[i][j]);
        }
        
    }
    
    return 0;
}