#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

float altura = 0;
char sexo;
float pesoIdeal = 0;
char stop;

inputData()
{
    printf("Digite sua altura");
    scanf("%f",&altura);
    fflush(stdin);
    printf("Digite seu sexo");
    scanf("%c",&sexo);
    fflush(stdin);
    sexo = toupper(sexo);

    while(sexo != 'M' && sexo != 'F')
    {
        printf("Dados invalidos\n Digite seu sexo novamente. M para  masculino e F para feminino\n");
        scanf("%c",&sexo);
        fflush(stdin);
        sexo = toupper(sexo);
    }


}
processing()
{
    if(sexo == 'M')
    {
        pesoIdeal = (72.7 * altura) - 58;
    }
    else if(sexo =='F')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("Seu peso ideal %.2f\n",pesoIdeal);
}


int main()
{
    do
    {
        printf("Digite qualquer tecla para continuar ou 'N' para parar\n");
        scanf("%c",&stop);
        stop = toupper(stop);
        if(stop != 'N')
        {
            inputData();
            processing();
        }


    }
    while(stop != 'N');


    return 0;
}
