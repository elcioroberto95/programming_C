#include <stdio.h>
#include <stdlib.h>


main()
{
int matriz[3][3];
int coluna[3];
int linha [3];
int k,m;
k=0;
m=0;

int i,j;

printf("\n Carregando de dados a Matriz");
printf("\n\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    scanf("%d",&matriz[i][j]);
  }
}
  for(i=0;i<3;i++)
  {
   k++;
   linha[k]=0;
  for(j=0;j<3;j++)
  {
   linha[k]+=matriz[i][j];
   }
  }
   for(i=1;i<=k;i++)
   {
       printf("Soma da linha %d %d\n",i,linha[i]);
   }

   for(j=0;j<3;j++)
  {
   m++;
   coluna[m]=0;
  for(i=0;i<3;i++)
  {
   coluna[m]+=matriz[i][j];
   }
  }
   for(i=1;i<=m;i++)
   {
       printf("Soma das colunas %d %d\n",i,coluna[i]);
   }



}






