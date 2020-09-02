#include <stdio.h>
#include <stdlib.h>
int main()
{

    int clientes;
    float compra;
    float desconto ;
    float valorPagar;
    printf("Insira quantos clientes sera necessario\n");
    scanf("%d",&clientes);

    for(int i = 0 ;i < clientes;i++)
    {
        printf("Insira o valor da compra\n");
        scanf("%f", &compra);

        if(compra >300)
        {
         desconto = (compra-300)*0.1;
         valorPagar = compra - desconto;
        }
        else
        {
            desconto = 0;
            valorPagar = compra;
        }

    }
    printf("O valor da compra e %.2f\n",compra);
    printf("O valor do desconto e %.2f\n",desconto);
    printf("O valor a pagar e %.2f\n",valorPagar);

return 0;
}

