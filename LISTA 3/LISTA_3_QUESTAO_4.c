/* 4. Construa um algoritmo que indique se um número digitado está compreendido
entre 20 e 90 ou não (20 e 90 não estão na faixa de valores). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>.

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int num;

  printf("Informe um numero:");
  scanf("%d", &num);

  if (num >= 20 && num <= 90)
  {
    printf("Numero informado esta compreendido entre 20 e 90!\n");
  }
  else
  {
    printf("Numero informado nao esta compreendido entre 20 e 90!\n");
  }

  system("PAUSE");
  return 0;
}