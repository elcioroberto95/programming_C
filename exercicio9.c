#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int n,i,totalp,nr;
char sexo;
int quat,pront;
int somah,somaf,k,f;
float salm,prod,sal,maior,pagto;
float mediah,mediaf;

main()
{
    k=0;
    f=0;
    salm =1045;
    maior =0;
    somah=0;
    somaf=0;
    printf("\n Informe a quantidade de funcion�rios");
    scanf("%d",&n);
    fflush(stdin);

    for(i=0; i<n; i++)
    {
        prod=0;

        printf("\n Informe o prontuario do funcion�rio");
        scanf("%d",&pront);
        fflush(stdin);

        printf("\n Informe o sexo da Pessoa");
        scanf("%c",&sexo);
        sexo = toupper(sexo);
        fflush(stdin);

        printf("\n Informe a quantidade de pe�as produzidas");
        scanf("%d", &quat);
        fflush(stdin);

        pagto=pagto+sal;
        totalp= totalp+quat;

        if(quat <= 30)
        {

            sal = salm;

        }
        else
        {

            if( quat >= 31 && quat <=35)
            {

                prod = quat -30;

                prod = (prod*(salm*0.03));

                sal = salm+prod;

            }
            else
            {

                prod = quat -35;
                prod = (prod*(salm*0.05));
                sal = salm+prod;
            }
        }

        if(sexo == 'M')
        {
            k++;
            somah=somah+quat;
        }
        else
        {

            f++;
            somaf =somaf+quat;
        }

        if (sal > maior)
        {
            maior =sal;
            nr    =pront;
        }

        // Vis�o Parcial

        printf("\n Numero do OPerario  %d", pront);
        printf("\n Salario do Funcion�rio %.2f", sal);
        printf("\n\n");
    }
    // Encerramento do processamento


    mediah = somah/k;

    mediaf = somaf/f;

    printf("\n ******* Consolida��o do Processamento ************");
    printf("\n Total da Folha de Pagamento %.2f",pagto);
    printf ("\n Total de pe�as fabricadas %d",totalp);
    printf("\n Media de Pe�as fabricadas pelos homens %.2f", mediah);
    printf("\n Media de Pe�as Fabricadas pelas Mulheres %.2f", mediaf);
    printf("\n O numero  e salario do OPerario(a) de maior salario %d %.2f",nr,maior);

}
