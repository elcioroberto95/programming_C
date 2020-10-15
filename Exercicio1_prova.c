#include<stdio.h>
#include<stdlib.h>
main(){
int registros;

printf("Insira a quantidade de registros");
scanf("%d",&registros);
    char sexo[registros];
    int codigo[registros];
    float horas[registros];
    float salarioLiquido[registros];
    float salarioBruto[registros];
    float valorHoraAula = 18.5;
    int masculino = 0;
    int feminino = 0;
    float acumuladorLiquidoM = 0;
    float acumuladorLiquidoF = 0;
    float mediaSalarioLiquidoM = 0;
    float mediaSalarioLiquidoF = 0;
    float desconto[registros];
for(int i = 0;i < registros ;i++)
{



    printf("Insira o codigo\n");
    scanf("%d",&codigo[i]);
    fflush(stdin);

    printf("Insira o sexo\n");
    scanf("%c",&sexo[i]);
    fflush(stdin);
    strupr(sexo);

        while(sexo[i] != 'M' && sexo[i] != 'F'){
            printf("DADOS INVALIDOS,DIGITE M OU F \n");
            scanf("%c",&sexo);
            strupr(sexo);
            fflush(stdin);
    }

printf("Insira o numero de horas\n");
scanf("%f",&horas[i]);
fflush(stdin);
    if (sexo[i]=='M'){
        masculino++;
        salarioBruto[i] = valorHoraAula * horas[i];
        desconto[i] = 0;
        desconto[i] = salarioBruto[i] * 0.1;
        salarioLiquido[i] = salarioBruto[i] - desconto[i];

        acumuladorLiquidoM += salarioLiquido[i];
        }
    else if(sexo[i] =='F'){
        feminino++;
        salarioBruto[i] = horas[i] * valorHoraAula;
        desconto[i] = 0;
        desconto[i] = salarioBruto[i]* 0.05;
        salarioLiquido[i] = salarioBruto[i] - desconto[i];
        acumuladorLiquidoF += salarioLiquido[i];
    }

    printf("O salario bruto e %.2f\n",salarioBruto[i]);
    printf("O salario liquido e %.2f\n",salarioLiquido[i]);
    printf("O desconto e %.2f\n",desconto[i]);
     printf("--------------------------------------\n");
}


mediaSalarioLiquidoF  = acumuladorLiquidoF/feminino;
mediaSalarioLiquidoM = acumuladorLiquidoM/masculino;
     printf("------RELATORIO GERAL------------\n");
for(int i = 0;i < registros;i++){
     printf("--------------------------------------\n");
    printf("FUNCIONARIO DE CODIGO %d\n",codigo[i]);
    printf("O salario bruto e %.2f\n",salarioBruto[i]);
    printf("O salario liquido e %.2f\n",salarioLiquido[i]);
    printf("O desconto e %.2f\n",desconto[i]);
    printf("--------------------------------------\n");
}

printf("A MEDIA DOS HOMENS E %.2f\n", mediaSalarioLiquidoM);
printf("A MEDIA DAS MULHERES E %.2f\n", mediaSalarioLiquidoF);

}
