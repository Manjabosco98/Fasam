/* 1. Construa um algoritmo em C que determine (imprima) se um dado número N
inteiro (recebido através do teclado) é PAR ou ÍMPAR e se é POSITIVO,
NEGATIVO ou NULO. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "pt-br");

  int n;

  printf("Informe um numero:");
  scanf("%d", &n);

  if (n != 0)
  {
    if ((n % 2) == 0)
    {
      printf("Numero informado e par!\n");
    }
    else
    {
      printf("Numero informado e impar!\n");
    }
  }

  if (n > 0)
  {
    printf("Numero informado e positivo!\n");
  }
  else if (n < 0)
  {
    printf("Numero informado e negativo!\n");
  }
  else
  {
    printf("Numero informado e nulo!\n");
  }

  system("PAUSE");
  return 0;
}
