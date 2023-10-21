#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");

    int i, menu, filho, somaFilhos, mediaFilhos, maiorSalario = 0, menorSalario = 99999;
    float salario, somaSalario, mediaSalarial;
    
    do
    {
    	
    printf("Pesquisa local de estudo populacional\n");
	printf("C�digo   |   Descri��o\n");
	printf("    1    |  Adicionar familia\n");
	printf("    2    |  Sair e exibir resultados\n");
	scanf("%i",&menu);


    switch (menu)
    {
    case 1:
    printf("Digite o seu sal�rio: ");
    scanf("%f",&salario);

    printf("Quantidade de filhos: ");
    scanf("%i",&filho);
    
    //system("clear || cls");

    i++;
    somaSalario += salario;
    mediaSalarial = somaSalario / i;

    somaFilhos += filho;
    mediaFilhos = somaFilhos / i;
    
    maiorSalario = salario > maiorSalario ? salario : maiorSalario;
    menorSalario = salario < menorSalario ? salario : menorSalario;

    break;

    case 2:	
    
    printf("Fim da pesquisa! Aqui est�o os resultados da sua localidade: \n");
    printf("N�mero total de fam�lias que responderam a pesquisa: %i \n", i);
    printf("M�dia de sal�rio da popula��o: %.2f \n", mediaSalarial);
    printf("M�dia de n�mero de filhos: %i \n", mediaFilhos);
    printf("Maior sal�rio: %i \n", maiorSalario);
    printf("Menor sal�rio: %i \n", menorSalario);
    
    //system("clear || cls");

    break;

    default:
    printf("Op��o Inv�lida!");
        break;
    }
    
    } while (menu != 2);
    
	
	return 0;
}
