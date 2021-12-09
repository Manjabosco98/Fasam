/* 4. Escreva um programa que leia uma matriz NxM valores reais, determine e imprima o
maior elemento de cada linha da matriz e sua posição na linha. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

// i = linha
// j = coluna

int main()
{
  srand(time(NULL));
  int matriz[5][5], i, j, vetor[5];

  // Preenchendo a matriz com números aleatorios
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      matriz[i][j] = rand() % 13;
    }
  }
  printf("\n");
  // Mostrando a matriz
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("[%d] \t", matriz[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (j == 0)
      {
        vetor[i] = matriz[i][j];
      }
      else if (matriz[i][j] > vetor[i])
      {
        vetor[i] = matriz[i][j];
      }
    }
  }
  printf("\n");
  for (i = 0; i < 5; i++)
  {
    printf("Linha [%d] Numero maior [%d] \n", i, vetor[i]);
  }

  return 0;
}