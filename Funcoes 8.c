#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int soma(int n1, int n2)
{
    return n1 + n2;
}

int subtracao(int n1, int n2)
{
    return n1 - n2;
}

float divisao(int n1, int n2)
{
    return n1 / n2;
}

int multi(int n1, int n2)
{
    return n1 * n2;
}
void resposta(float resultado)
{
    printf("\nO resultado é: %.1f",resultado);
}

int main()
{
    int numeroUm, numeroDois, codigo, resultado;

    printf("Digite o 1º número: ");
    scanf("%d", &numeroUm);

    printf("Digite o 2º número: ");
    scanf("%d", &numeroDois);

    printf("\nEscolha a operação matemática a ser feita.\n");
    printf("1- Soma.\n");
    printf("2- Subtração.\n");
    printf("3-Divisão.\n");
    printf("4-Multiplicação.\n");
    printf("R:\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        resultado = soma(numeroUm, numeroDois);
        break;

    case 2:
        resultado = subtracao(numeroUm, numeroDois);
        break;

    case 3:
        resultado = divisao(numeroUm, numeroDois);
        break;

    case 4:
        resultado = multi(numeroUm, numeroDois);
        break;

    default:
        break;
    }

    resposta(resultado);

    return 0;
}