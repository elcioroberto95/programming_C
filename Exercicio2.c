#include <stdio.h>
#include <stdlib.h>

int main(){
float valorLoja[5][4];
float imposto[5][4];
float transporte[5];
int i,j;
char produtos[5][10];
 for(i=0;i<5;i++)
 {
    printf("DIGITE O NOME DO PRODUTO%d\n",i+1);
    scanf("%s",&produtos[i]);
    fflush(stdin);
    printf("DIGITE O CUSTO DO TRANSPORTE\n");
    scanf("%f",&transporte[i]);
    fflush(stdin);
   for(j=0;j<4;j++)
    {
    printf("DIGITE O PRECO DA LOJA %d \n",j+1);
    scanf("%f",&valorLoja[i][j]);
    fflush(stdin);
    }
 }
for(i=0;i<5;i++)
 {
   for(j=0;j<4;j++)
    {
        if(valorLoja[i][j] <= 50.00){
            imposto[i][j] = valorLoja[i][j] * 0.05;
        }
         else if(valorLoja[i][j] > 50.00 && valorLoja[i][j] <= 100 ){
            imposto[i][j] = valorLoja[i][j] * 0.10;
        }else {
            imposto[i][j] = valorLoja[i][j] * 0.20;
        }
    }
 }
 for(i=0;i<5;i++)
 {
     printf("PRODUTO %d\n",i+1);
   for(j=0;j<4;j++){
    printf("VALOR DO IMPOSTO REFERENTE A LOJA %d %.2f \n ",j+1,imposto[i][j]);
   }
 }
return 0;
}
