#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main()
{
 int numero[10];
 int par[10];
 int impar[10];
 int i,k,j;
 k=0;
 j=0;
 for(i=0;i<10;i++)
 {

  printf("\n Carregando os numeros...\t \t");
  scanf("%d",&numero[i]);
   if(numero[i] %2  == 0)
   {
       k++;
       par[k]=numero[i]; // vetor de processamento

   }else {

      j++;
      impar[j]=numero[i];

   }
 }
for(i=1;i<=k;i++)
{
   printf("\n Exibindo a posição...: \t %d ",par[i]);

}
printf("\n\n Conjunto Impares...");
for(i=1;i<=j;i++)
{
   printf("\n Exibindo a posição...: \t %d ",impar[i]);
   }


}
