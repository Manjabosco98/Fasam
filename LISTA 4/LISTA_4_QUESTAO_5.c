/* 5. Construir um programa para identificar quantos dias há em um mês,
sabendo o mês e o ano. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

  int mes, ano;

  printf("Informe um mes:");
  scanf("%d", &mes);

  switch (mes)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("Mes tem 31 dias!\n");
    break;
  case 2:
    printf("Informe um ano:");
    scanf("%d", &ano);
    if (ano % 4 == 0)
    {
      printf("Ano informado e Bissexto e mes de fevereiro te 29 dias!\n");
    }
    else
    {
      printf("Ano informado nao e bissexto e mes de fevereiro tem 28 dias!\n");
    }
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("Mes tem 30 dias!\n");
    break;
  default:
    printf("Mes informado invalida! Encerrando sistema...\n");
  }

  system("PAUSE");
  return 0;
}