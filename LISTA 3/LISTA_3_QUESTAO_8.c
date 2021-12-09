/* 8. Escreva um algoritmo que leia um número e informe se ele é divisível por 10,
por 5 ou por 2 ou se não é divisível por nenhum deles. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int num;

  printf("Informe um numero:");
  scanf("%d", &num);

  if (num % 10 == 0)
  {
    printf("Numero informado e divisivel por 10! \n");
  }
  else if (num % 5 == 0)
  {
    printf("Numero informado e divisivel por 5! \n");
  }
  else if (num % 2 == 0)
  {
    printf("Numero informado e divisivel por 2! \n");
  }
  else
  {
    printf("Numero informado nao e divisivel por 10, 5 e 2! \n");
  }

  system("PAUSE");
  return 0;
}