/* 5. Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200,
a 400, se está no intervalo entre 500 e 1000, inclusive, ou se ela está fora dos
escopos anteriores. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int num;

  printf("Informe um numero:");
  scanf("%d", &num);

  if (num >= 500 && num <= 1000)
  {
    printf("Esta entre 500 e 1000!\n");
  }
  else
  {
    if (num == 5)
    {
      printf("Numero informado igual a 5! \n");
    }
    else if (num == 200)
    {
      printf("Numero informado igual a 200! \n");
    }
    else if (num == 400)
    {
      printf("Numero informado igual a 400! \n");
    }
    else
    {
      printf("Numero informado esta fora dos escopos anteriores! \n");
    }
  }

  system("PAUSE");
  return 0;
}