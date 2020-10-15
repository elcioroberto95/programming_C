#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n,i;
    int numerosPares;
    int somatoria = 0;

    printf("Digite a quantidade de numeros que deseja inserir");
    scanf("%i",&n);
    fflush(stdin);

    int numerosInteiros[n];
    for(i = 0; i < n; i++)
    {
        printf("Digite os numeros do vetor");
        scanf("%d",&numerosInteiros[i]);
        fflush(stdin);

        if(numerosInteiros[i] % 2 == 0)
        {
            numerosPares++;
        }
        else if(numerosInteiros[i] % 2 != 0)
        {
            somatoria += numerosInteiros[i];

        }

    }
    printf("A quantidade de numeros pares e %d\n",numerosPares);
    printf("A somatoria dos numeros impares e %d\n",somatoria);

    return 0;
}
