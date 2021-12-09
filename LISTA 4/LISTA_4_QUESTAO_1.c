/* 1. Recebidos valores numéricos entre zero e cinco, escreva-os na forma
literal (texto). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "pt-br");

  int num;

  printf("Informe um numero:");
  scanf("%d", &num);

  switch (num)
  {
  case 1:
    printf("Cinco!\n");
    break;
  case 2:
    printf("Dois!\n");
    break;
  case 3:
    printf("Tres!\n");
    break;
  case 4:
    printf("Quatro!\n");
    break;
  case 5:
    printf("Cinco!\n");
    break;
  default:
    printf("Opcao invalida!\n");
    break;
  }

  system("PAUSE");
  return 0;
}