#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
int mulher = 0;
int homem = 0;
int i;
int quantidade = 0;
char sexo;
float alturaMulheres = 0;
float maior = 0;
float menor = 0;
char sexoMaior;


printf("digite a quantidade de pessoas\n");
scanf("%d",&quantidade);
float altura[quantidade];
for(i = 0;i < quantidade ;i++)
{

        printf("digite o seu sexo\n");
        fflush(stdin);
        scanf("%c",&sexo);
        fflush(stdin);
        sexo = toupper(sexo);

        while(sexo != 'M' && sexo != 'H'){
        printf("Caractere incorreto,digite novamente.\n");
        scanf("%c",&sexo);
        fflush(stdin);
        sexo = toupper(sexo);
        }



        printf("Digite a sua altura\n");
        scanf("%f",&altura[i]);

            if(sexo == 'M')
            {
            alturaMulheres +=altura[i];
            mulher++;
            }

            if(sexo == 'H')
            {
                homem++;
            }

                 if(maior == 0){
                    maior = altura[i];

                    sexoMaior = sexo;

                 }
                 else if(altura[i] > maior){
                    maior = altura[i];

                   sexoMaior = sexo;
                 }

                 if(menor == 0){
                    menor = altura[i];
                 }
                 if(menor > altura[i]) {
                    menor = altura[i];


                 }


}
float media = (alturaMulheres/mulher);
printf("A quantidade de mulhres %d\n",mulher);
printf("a quantidade de homens %d\n",homem);
printf("A media da altura das mulheres e %.2f\n",media);
printf("A menor altura do grupo e %.2f\n",menor);
printf("A maior altura e %.2f\n",maior);
if(sexoMaior =='M'){
printf("A pessoa mais alta e uma mulher");
}
if(sexoMaior =='H')
{
    printf("A pessoa mais alta e um homem");
}


return 0;
}
