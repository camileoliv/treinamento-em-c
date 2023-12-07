#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

float inflacao(float valor)
{
    float resultado;
    resultado = valor < 100 ? valor * 1.1 : valor * 1.2;
    return resultado;
}

int main()
{
    float valor, valorInflacionado, resultado;

    printf("Qual o valor da sua compra: ");
    scanf("%f", &valor);

    valorInflacionado = inflacao(valor);

    printf("O valor final é: %.1f \n", valorInflacionado);

    return 0;
}