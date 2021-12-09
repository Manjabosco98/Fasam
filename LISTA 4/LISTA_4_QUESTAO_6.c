/* 6. Crie um programa que exibe se um dia é dia útil, fim de semana ou dia
inválido dado o número referente ao dia. Considere que domingo é o
dia 1 e sábado é o dia 7. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int dia;

  printf("Informe um numero para o dia:");
  scanf("%d", &dia);

  switch (dia)
  {
  case 1:
    printf("Domingo - Final De Semana!\n");
    break;
  case 2:
    printf("Segunda-Feira - Dia Util!\n");
    break;
  case 3:
    printf("Terca-Feira - Dia Util!\n");
    break;
  case 4:
    printf("Quarta-Feira - Dia Util!\n");
    break;
  case 5:
    printf("Quinta-Feira - Dia Util!\n");
    break;
  case 6:
    printf("Sexta-Feira - Dia Util!\n");
    break;
  case 7:
    printf("Sabado - Final De Semana!\n");
    break;
  default:
    printf("Dia informado invalido!\n");
  }

  system("PAUSE");
  return 0;
}