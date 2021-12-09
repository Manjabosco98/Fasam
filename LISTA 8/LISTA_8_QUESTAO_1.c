/* 1. Gerar um vetor com 10 números da seguinte forma: cada número guardado no vetor será
o valor da sua própria posição no vetor (seu índice) menos 2 (ou seja, Xi = i-2). Mostrar na
tela este vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

int main()
{

  int vetor[10], i;

  for (i = 0; i < 10; ++i)
  {
    vetor[i] = i - 2;
    printf("%d ", vetor[i]);
  }
  printf("\n");
  system("PAUSE");
  return 0;
}