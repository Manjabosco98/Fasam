/* 7. Escreva um algoritmo que leia uma matriz A de dimensão 4 x 4 de valores reais, calcule e
imprima a soma dos elementos da diagonal secundária. Coloque os elementos da diagonal
secundária em um vetor S. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
  srand(time(NULL));
  float matriz[4][4], vetor[4], soma;
  int linha, coluna;

  soma = 0;

  // Preenchendo a matriz aleatoriamente
  printf("Matriz Preenchida alaeatoriamente\n");
  for (linha = 0; linha < 4; linha++)
  {
    for (coluna = 0; coluna < 4; coluna++)
    {
      matriz[linha][coluna] = rand() % 8;
    }
  }
  printf("\n");
  // Mostrando a matriz
  for (linha = 0; linha < 4; linha++)
  {
    for (coluna = 0; coluna < 4; coluna++)
    {
      printf("[%.2f]\t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");
  // Matriz Secundaria
  printf("Matriz Secundaria\n");
  printf("\n");
  for (linha = 0; linha < 4; linha++)
  {
    for (coluna = 0; coluna < 4; coluna++)
    {
      if (coluna + linha == 3)
      {
        vetor[linha] = matriz[linha][coluna];
        soma += matriz[linha][coluna];
        printf("[%.2f]\t", vetor[linha]);
      }
      else
      {
        printf("---\t");
      }
    }
    printf("\n");
  }
  printf("\n");
  // Mostrando vetor secundario
  printf("Vetor Secundario ");
  for (linha = 0; linha < 4; linha++)
  {
    printf("[%.2f]\t", vetor[linha]);
  }
  printf("= Soma [%.2f]\t", soma);
  return 0;
}