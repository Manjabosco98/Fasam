/* 8. Dada uma matriz A de dimensão 5 x 7 gere sua transposta. Imprima a matriz original e a
sua transposta. */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int matriz[5][7], linha, coluna;

  // Preenchendo a matriz aleatoria
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 7; coluna++)
    {
      matriz[linha][coluna] = rand() % 12;
    }
  }
  printf("\n");
  // Mostrando a matriz
  printf("Matriz Original Preenchida aleatoria\n\n");
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 7; coluna++)
    {
      printf("[%d]\t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");
  // Matriz transposta
  printf("Matriz Transposta\n\n");
  for (coluna = 0; coluna < 7; coluna++)
  {
    for (linha = 0; linha < 5; linha++)
    {
      printf("[%d]\t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
}