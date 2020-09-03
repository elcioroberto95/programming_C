#include <stdio.h>
#include <stdlib.h>
main()
{
    float ht;
    float hex,soma,extra,irrf;
    float sh,sal,sb,salliq;
    int dps,i,idade,j,n;




    sal = 1045; // Constante


    sh = sal/10; // Constante

    printf("\n Informe a quantidade de funcionarios");
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        soma =0;
        printf("\n Informe Horas Trabalhadas...");
        scanf("%f", &ht);

        printf("\n Informe se há horas Extras..");
        scanf("%f", &hex);
        sb = ht*sh;
        extra = (hex*sh)*1.5;
        sb= sb+(soma+extra);
        printf("\n Informe o numero dependente");
        scanf("%d", &dps);
        for(i=0; i<dps; i++)
        {
            printf("\n Informe a idade");
            scanf("%d", &idade);
            if (idade <= 15 && sb < 1500)
            {
                soma = soma +32;
            }
        }

        if (sb < 1500)
        {
            irrf=0;
        }
        else
        {
            if(sb >1501 && sb<3500)
            {
                irrf = sb *0.1;
            }
            else
            {

                irrf= sb *0.2;
            }
        }
        salliq = (sb-irrf);

        printf("\n Salario Bruto ...%.2f",sb);
        printf("\n Salario Liquido.. %.2f",salliq);
        printf("\n Horas Extras......%.2f",extra);
        printf("\n Dependente........%.2f",soma);
        printf("\n IRRF .............%.2f",irrf);
    }
}
