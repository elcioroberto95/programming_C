#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int i,j,k;
char nome[7][10];
char nomeMaior[10];
char nomeMenor[10];
float media[7];
float maior = 0;
float menor = 0;
int menores6 = 0;
float mediaAlunos = 0;
float acumulador  = 0;

int calculoMaior()
{

    for(k = 0; k < 7; k++)
    {

        if(media[k] < 6)
        {
            menores6++;
        }
        if(maior == 0)
        {
            maior =  media[k];
            strcpy(nomeMaior,nome[k]);
        }
        if(media[k] > maior)
        {
            maior =  media[k];
            strcpy(nomeMaior,nome[k]);
        }
    }
}
int calcularMedia(){
for(i = 0; i < 7 ;i++){
acumulador += media[i];
}
mediaAlunos = acumulador / 7;

}
int calculoMenor()
{

    for(k = 0; k < 7; k++)
    {

        if(menor == 0)
        {
            menor =  media[k];
            strcpy(nomeMenor,nome[k]);
        }
        if(media[k] < menor)
        {
            menor =  media[k];
            strcpy(nomeMenor,nome[k]);
        }
    }
    for(k = 0; k < 7; k++)
    {
        if (media[k] == 0)
        {
            strcpy(nomeMenor,nome[k]);
        }
    }
}
int entradas()
{
    while(j < 7)
    {
        printf("Digite o nome\n");
        scanf("%s",&nome[j]);
        fflush(stdin);
        printf("Digite a media\n");
        scanf("%f",&media[j]);
        fflush(stdin);
        j++;
    }


}
int impressao()
{
    i = 0;
    while(i < 7)
    {
        printf("%s %.2f\n",nome[i],media[i]);
        i++;
    }
    printf("A quantidade de notas menores que 6 e %d\n",menores6);
    printf("O nome do maior e %s\n",nomeMaior);
    printf("O nome do menor e %s\n",nomeMenor);
    printf("A media dos alunos %.2f",mediaAlunos);



}
int main()
{
    entradas();
    system("cls");
    calcularMedia();
    calculoMaior();
    calculoMenor();
    impressao();



    return 0;
}
