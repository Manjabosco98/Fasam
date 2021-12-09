/* 1. Construa um programa que leia um vetor de nove posições e a partir deste vetor,
preencha uma matriz 3x3 com os mesmos valores. O preenchimento da matriz deve ser
por linha. Ao final, imprima o vetor e a matriz gerada. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>

int main()
{

  int vetor[9], matriz[3][3], i, j, k;

  // Preenchendo vetor.
  for (i = 0; i < 9; i++)
  {
    scanf("%d", &vetor[i]);
  }
  printf("\n");

  k = 0;
  // Preenchendo a matriz com os dados do vetor
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      matriz[i][j] = vetor[k];
      k++;
    }
  }
  // Mostrando vetor
  printf("Vetor ");
  for (i = 0; i < 9; i++)
  {
    printf("[%d] ", vetor[i]);
  }
  printf("\n");
  // Mostrando matriz
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("[%d] ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}