  #include<stdio.h>
  #include<stdlib.h>
  int main()
  {
  int pessoas,idade,maior50;
  float peso,altura,acumulador,contaidade1020,media,porcentagem,pesoM40;
  media = 0;
  porcentagem = 0;
  contaidade1020 = 0;
  pesoM40=0;
  maior50=0;
  idade = 0;


  printf("Insira a quantidade de pessoas");
  scanf("%d",&pessoas);
  for(int i = 0; i < pessoas;i++)
  {
  printf("Digite a idade\n");
  scanf("%d",&idade);
  printf("Digite a altura\n");
  scanf("%f",&altura);
  printf("Digite o peso\n");
  scanf("%f",&peso);
      if(idade > 50){
      maior50++;
      }
      if(idade >10 && idade < 20){
        contaidade1020++;
          acumulador += altura;

      }
          if(peso<40){
              pesoM40++;
          }

  }
  media = acumulador/contaidade1020;
  porcentagem = (pesoM40/pessoas)*100;
  printf("\nA quantidade de pessoas com idade superior a 50 e %d",maior50);
  printf("\nA media das alturas entre 10 a 20 anos %.2f",media);
  printf("\nA porcentagem dos de pessoas abaixo de 40 quilos %.2f",porcentagem);
  system("pause");






  return 0;
  }
