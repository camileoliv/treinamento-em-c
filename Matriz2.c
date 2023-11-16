#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    int i,j;
    char alunos[2][200];
    float nota[2][3];

    for ( i = 0; i < 2; i++)
    {

        printf("Digite o nome do aluno: ");
        gets(alunos[i]);
        for ( j = 0; j < 3; j++)
        {
            printf("Digite a %dª nota: ",j+1);
            scanf("%f",&nota[i][j]);
        }

        fflush(stdin);
        
    }

    for ( i = 0; i < 2; i++)
    {
        printf("Nome do %dº aluno: ",i+1,alunos[i]);

        for ( j = 0; j < 3; j++)
        {
            printf("%dª nota: %.1f",j+1,nota[i][j]);
        }
        
        
    }
    

    return 0;
}