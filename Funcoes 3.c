#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int somar (int n1, int n2){
    return n1 + n2;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    int soma;

    printf("Escreva o primeiro numero: ");
    scanf("%i",&numeroUm);

    printf("Escreva o segundo numero: ");
    scanf("%i",&numeroDois);

    soma = somar(numeroUm, numeroDois);

    printf("Soma: %i",soma);



    return 0;
}