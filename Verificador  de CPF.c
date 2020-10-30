/* Ao fornecer ao sistema o CPF, indentifique o seu digito verificador exibindo e complementando o dado.

CPF                          ?    ?
__ __ __ __ __ __ __ __ __ ____ _____
D1 D2 D3 D4 D5 D6 D7 D8 D9 DAC1 DAC 2

PROCEDIMENTO

* informe o cpf;
* Calcule e encontre o digito vefificador
* Exibir Resultado; */


#include <STDIO.H>
#include <stdlib.h>

int main()

{

char cpf2[9];
int cpf1[9];
int soma, dac1, dac2;
int j, p, resto, conta,i;
p=0;
j=10;

soma=0;
conta=0;
resto=0;


printf(" INFORME O CPF: ");


gets (cpf2); // gets, usado para uma unica cadeia de caracteres, quando usa varias cadeias( vários nomes)  usa fgets.

    for(i=0; i<9; i++)
    {
       cpf1[i] = cpf2[i] - '0'; // converte carecteres para número.
    }

    for( i=0; i<9; i++)
    {
       p= cpf1[i]*j;
       soma= soma + p;
       j--;
    }

    resto = soma % 11; // mode, faz a leitura do resto da divisao
    conta = 11 - resto;

    if(conta> 9)
    {
        dac1=0;
    }

    else
    {
        dac1= conta;
    }

    //  CALCULO DO 2 DIGITO DO CPF:

    j=11,soma=0;

   for(i=0; i<9; i++)
    {
       p= cpf1[i]*j;
       soma= soma + p;
       j--;
    }


soma= soma + (dac1*2);

resto = soma %11;
conta = 11 - resto;
    if(conta>9)
    {
    dac2=0;
    }
    else
    {
    dac2=conta;
    }


    printf(" Os digitos verificadores do seu CPF sao: %d%d", dac1, dac2);



return 0;
}
