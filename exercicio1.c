#include <stdio.h>
#include <stdlib.h>
int quantidadeProdutos = 5;
int produtosMenorQue50 = 0;
char nome[5][10];
float preco[5];


int  maiorQue50eMenor100()
{
    printf("O nome dos produtos com preco entre R$ 50,00 a R$ 100,00 \n\n ");
    for(int i =0;i<quantidadeProdutos;i++)
    {

        if(preco[i]>=50 && preco[i]<=100)
        {
        printf("%s\n",nome[i]);
        }
    }
}


int precoSuperiorA100(){
float precoMaior = 0;
float acumula100 = 0;

float media;

 for(int i =0;i<quantidadeProdutos;i++)
    {

        if(preco[i]>100)
        {
        precoMaior++;
        acumula100 = acumula100 + preco[i];

        }
}

media = acumula100/precoMaior;
printf("A media dos produtos maior que 100 %.2f\n",media);
}

int main(){

        for(int i = 0;i < quantidadeProdutos;i++){
        printf("Digite o nome\n");
        scanf("%s",&nome[i]);
        fflush(stdin);

        printf("Digite o preco\n");
        scanf("%f",&preco[i]);

        }
for(int i = 0;i < quantidadeProdutos;i++){
    if(preco[i]< 50)
    {
    produtosMenorQue50++;
    }
}
printf("Quantidade Produtos com valor inferior a 50: %d\n",produtosMenorQue50);

maiorQue50eMenor100();
precoSuperiorA100();
}
