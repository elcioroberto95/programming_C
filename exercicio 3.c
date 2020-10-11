#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int op = 0;
int candidato1 = 0;
int candidato2 = 0;
int candidato3 = 0;
int candidato4 = 0;
int nulo;
float nuloPorc;
int branco;
float brancoPorc;
float porcNulos;
float porcBranco;
int eleitores;
calculo(){
porcNulos = (nuloPorc/eleitores)*100;
porcBranco = (brancoPorc/eleitores) * 100;
printf("O total de votos do candidato 1 %d\n",candidato1);

printf("O total de votos do candidato 2 %d\n",candidato2);

printf("O total de votos do candidato 3 %d\n",candidato3);

printf("O total de votos do candidato 4 %d\n",candidato4);

printf("O total de votos nulos foram %d\n",nulo);
printf("O total de votos em brancos foram %d\n",branco);
printf("A porcentagem de votos nulos foram %.2f %%\n",porcNulos);
printf("A porcentagem de votos brancos foram %.2f %%\n",porcBranco);
}


votacao()
{
    printf("Digite o numero do seu candidato\n");
    scanf("%d",&op);
    fflush(stdin);
        switch(op){
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
            candidato3++;
            break;
        case 4:
            candidato4++;
            break;
        case 5:
            nulo++;
            nuloPorc++;
            break;
        case 6:
            branco++;
            brancoPorc++;
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
}
int main(){
printf("Quantidade de eleitores");
scanf("%d",&eleitores);
fflush(stdin);
    for(int i = 0; i < eleitores;i++){
        votacao();
            while(op > 6)
            {
            votacao();
            }
    }


calculo();

return 0;
}
