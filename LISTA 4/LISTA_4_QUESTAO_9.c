/* 9. Criar um programa para identificar o valor a ser pago por um plano de
saúde dada a idade do conveniado considerando que todos pagam R$
100 mais um adicional conforme a seguinte tabela: 1) crianças com
menos de 10 anos pagam R$80; 2) conveniados com idade entre 10 e
30 anos pagam R$50; 3) conveniados com idade entre 40 e 60 anos
pagam R$ 95; e 4) conveniados com mais de 60 anos pagam R$130. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float valor_conveniado;
  int op, idade;

  printf("Informe a idade:");
  scanf("%d", &idade);

  if (idade <= 10)
  {
    op = 1;
  }
  else if (idade > 10 && idade <= 30)
  {
    op = 2;
  }
  else if (idade > 30 && idade <= 60)
  {
    op = 3;
  }
  else if (idade > 60)
  {
    op = 4;
  }

  printf(" 1-criancas com menos de 10 anos pagam R$80\n 2-onveniados com idade entre 10 e 30 anos pagam R$50\n 3-conveniados com idade entre 40 e 60 anos pagam R$ 95\n 4-conveniados com mais de 60 anos pagam R$130\n\n");

  switch (op)
  {
  case 1:
    valor_conveniado = 100 + 80;
    printf("Criancas com menos de 10 anos pagam R$%.2f\n", valor_conveniado);
    break;
  case 2:
    valor_conveniado = 100 + 50;
    printf("Conveniados com idade entre 10 e 30 anos pagam R$%.2f\n", valor_conveniado);
    break;
  case 3:
    valor_conveniado = 100 + 95;
    printf("Conveniados com idade entre 40 e 60 anos pagam R$%.2f\n", valor_conveniado);
    break;
  case 4:
    valor_conveniado = 100 + 130;
    printf("Conveniados com mais de 60 anos pagamR$%.2f\n", valor_conveniado);
    break;
  default:
    printf("Opcao Invalida!\n");
  }

  system("PAUSE");
  return 0;
}