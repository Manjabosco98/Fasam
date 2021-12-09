/* 3. Elaborar um programa que leia uma matriz A de dimensão 5 x 7 de inteiros e verifique qual
é seu maior elemento e imprima-o juntamente com sua posição na matriz (linha e coluna). */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>

int main()
{
  srand(time(NULL));
  int matriz[5][7], i, j, k, m, x;

  // Preenchendo a matriz
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 7; j++)
    {
      matriz[i][j] = rand() % 13;

      if (matriz[0][0] == matriz[i][j])
      {
        x = matriz[i][j];
        k = i;
        m = j;
      }
      else if (matriz[i][j] > x)
      {
        x = matriz[i][j];
        k = i;
        m = j;
      }
    }
  }
  printf("\n");
  // Mostrando a matriz
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 7; j++)
    {
      printf("[%d] ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Linha %d Coluna %d, valor e %d ", k, m, x);

  return 0;
}