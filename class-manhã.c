#include <stdlib.h>
#include <stdio.h>
#include <string.h>
main()
{
    int i,j;

    char nome[10][30];
    char x[30];

    printf("\n Informe o nome das Pessoas");

    for(i=0; i<=9; i++)
    {
        fgets(nome[i],30,stdin);
    }

// Ordenação dos Nomes

    for(i=0; i<=8; i++)
    {
        for(j=i+1; j<=9; j++)
        {
            if (strcmp(nome[i],nome[j])>0)
            {
                strcpy(x,nome[i]);
                strcpy(nome[i],nome[j]);
                strcpy(nome[j],x);
            }
        }
    }
    printf("\n\n");
    for(i=0; i<=9; i++)
    {
        printf("\n Nome......:%d  %s",i+1,nome[i]);
    }
}





