#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    int tamanho = 10;
    int i;
    float numeros [tamanho];
    float soma, negativo=0, positivo=0;
    
    for ( i= 0; i < tamanho; i++) {

    printf("Digite o %i ° número: ",i+1);
    scanf("%f",&numeros[i]);

    if (numeros[i] > 0)
    {
        positivo++;
        soma = soma + numeros[i];
    } else {
        negativo++;
    }

    }

    printf("Quantidade de valores negativos: %f \n", negativo);
    printf("Soma dos valores positivos: %d \n", soma);


    return 0;
}