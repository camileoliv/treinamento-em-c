#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 6
void verificarParOuImpar (int numero[]){
int i, pares=0, impares=0;

for ( i = 0; i < TAM; i++)
{
    if (numero[i] & 2 ==0)
    {
        pares++;
    } else {
        impares++;
    }
    
    printf("Quantidade de pares: %d \n",pares);
    printf("Quantidae de impares: %d \n",impares);
}

}

void limpaTela()
{
    fflush(stdin);
    system("cls||clear");
}

int main (){
int numero[TAM], i;

for ( i = 0; i < TAM; i++)
{
    printf("Digite um numero: ");
    scanf("%d",&numero[i]);
}

verificarParOuImpar(numero);


    return 0;
}