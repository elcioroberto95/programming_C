#include <stdio.h>
#include <stdlib.h>



main()
{

  char vendedores[5][20];
  float somalinha[5];
  float somacoluna[4];
  float mes[5][4];
  float somatotal;
  somatotal=0;


  int i,j;

// Carregando os nomes dos vendedores
  printf("\n Informe o nome dos vendedores");
  for(i=0;i<5;i++)
  {
   fgets(vendedores[i],20,stdin);

  }

  // Carregando a Matriz de vendas
  for(i=0;i<5;i++)
   {
       printf("\n Informe as vendas do vendedor nr %d",i+1);
       for(j=0;j<4;j++)
        {
            scanf("%f",&mes[i][j]);
            fflush(stdin);
        }
   }
   //Calculando a soma das vendas por vendedor
   for(i=0;i<5;i++)
   {
       somalinha[i]=0;
      for(j=0;j<4;j++)
        {
         somalinha[i]+=mes[i][j];
        }
   }
// Calculando a soma por semana
   for(j=0;j<4;j++)
   {
       somacoluna[j]=0;
      for(i=0;i<5;i++)
        {
         somacoluna[j]+=mes[i][j];
        }
   }

   for(i=0;i<4;i++)
   {
       printf("\n A semana %d teve o total de %.2f",i+1,somacoluna[i]);
   }



// Exibindo as Vendas por vendedor
   for(i=0;i<5;i++)
   {
       printf("\n O vendedor %s obteve o total de vendas %.2f", vendedores[i],somalinha[i]);
       somatotal+=somalinha[i];
       }
       // Exibindo o Total de Vendas
       printf("\n Total de Venda do Mes %.2f",somatotal);


}
