#include <stdio.h>
#include <stdlib.h>

int codigo;
float valor;


poupanca()
{
    printf("\n*********** Investimento Poupança ***************");
    printf("\n Informe o codigo do Cliente");
    scanf("%d", &codigo);
    printf("\n Informe o valor Investido");
    scanf("%f", &valor);
    valor = valor *1.015;
    printf("\n O valor resultante do investimento apos 30 dias %.2f", valor);
    printf("\n\n");
    system("pause");
}
poup_plus()
{
    printf("\n******** Investimento Poupança Plus ***************");
    printf("\n Informe o codigo do Cliente");
    scanf("%d", &codigo);
    printf("\n Informe o valor Investido");
    scanf("%f", &valor);
    valor = valor *1.02;
    printf("\n O valor resultante do investimento apos 30 dias %.2f", valor);
    printf("\n\n");
    system("pause");
}
renda()
{
    printf("\n*********** Investimento Renda Fixa ***************");
    printf("\n Informe o codigo do Cliente");
    scanf("%d", &codigo);
    printf("\n Informe o valor Investido");
    scanf("%f", &valor);
    valor = valor *1.04;
    printf("\n O valor resultante do investimento apos 30 dias %.2f", valor);
    printf("\n\n");
    system("pause");
}
main()
{
    char op;
    do
    {
        system("cls");
        printf("\n [1] Poupança.....");
        printf("\n [2] Poupança Plus .....");
        printf("\n [3] Fundo de Renda Fixa ..");
        printf("\n [4] Sair do Sistema....");
        printf("\n Escolha a opção Desejada...");

        scanf("%d",&op);
        switch(op)
        {
        case 1:
            poupanca();
            break;
        case 2:
            poup_plus();
            break;
        case 3:
            renda();
            break;
        case 4 :
            printf("\n Saindo do Sistema.. Aguarde...");
            break;
        default :
            printf("\n OPção invalida .. tente novamente");
            printf("\n\n");
            system("pause");
            break;
        }
        }while(op!=4);
       }
