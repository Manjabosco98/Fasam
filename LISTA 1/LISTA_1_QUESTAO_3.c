/*Escrever um algoritmo que leia o nome de um vendedor, o seu sal�rio fixo, e
o total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este
vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o
seu nome, o sal�rio fixo e sal�rio no final do m�s.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  char nome[20];
  double sal_fixo, sal_final, total_vendas, comissao;

  printf("\n\n");
  printf("Informe o nome do vendedor:");
  scanf("%s", nome);

  printf("Informe o salario do vendedor sem comissao:R$");
  scanf("%lf", &sal_fixo);

  printf("Informe o total de vendas no mes do vendedor:R$");
  scanf("%lf", &total_vendas);
  printf("\n\n");

  sal_final = (total_vendas * 0.45) + sal_fixo;
  comissao = total_vendas * 0.45;

  printf("Vendedor:%s\n", nome);
  printf("Salario sem comissao:R$%.2lf\n", sal_fixo);
  printf("Salario com comissao:R$%.2lf\n", sal_final);
  printf("Comissao:R$%.2f", comissao);
  printf("\n\n");

  system("PAUSE");
  return 0;
}