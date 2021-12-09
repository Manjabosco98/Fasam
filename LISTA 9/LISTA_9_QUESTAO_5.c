/* 5. Escreva um programa que receba uma matriz A 5 x 4 e gere um vetor Mcol de 5
elementos, onde cada um desses elementos seja a média dos elementos de uma linha da
matriz. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
  srand(time(NULL));
  int matriz[5][4], linha, coluna;
  float Mcol[5] = {0};

  // Preenchendo a matriz aleatoriamente
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 4; coluna++)
    {
      matriz[linha][coluna] = rand() % 9;
    }
  }
  printf("\n");
  // Mostrando a matriz
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 4; coluna++)
    {
      printf("[%d] ", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");

  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 4; coluna++)
    {
      Mcol[linha] += matriz[linha][coluna];
    }
    Mcol[linha] = Mcol[linha] / 4;
  }

  for (linha = 0; linha < 5; linha++)
  {
    printf("Linha [%d] media [%.2f] \n", linha, Mcol[linha]);
  }

  return 0;
}