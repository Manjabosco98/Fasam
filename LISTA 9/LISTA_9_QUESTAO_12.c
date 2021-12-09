/* 12. Escreva um programa que leia uma matriz 5x5 e:
a) O maior elemento da linha onde se encontra o menor elemento da área
rachurada em:
b) A média dos elementos da área rachurada em:
Obs.: Em ambas as áreas, deve-se incluir as diagnoais principal (exercício a e b) e
diagonal secundária (exercício b) */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

int main()
{
  srand(time(NULL));

  srand(time(NULL));
  int matriz[5][5], vetor[5], soma, linha, coluna, media;

  soma = 0;
  media = 0;

  // Preenchendo a matriz aleatoriamente
  printf("Matriz Preenchida alaeatoriamente\n");
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      matriz[linha][coluna] = rand() % 10;
    }
  }
  printf("\n");
  // Mostrando a matriz
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      printf("[%d]\t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");
  // Matriz Secundaria
  printf("Matriz Secundaria\n");
  printf("\n");
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      if (coluna + linha == 4)
      {
        vetor[linha] = matriz[linha][coluna];
        soma += matriz[linha][coluna];
        media = soma / 5;
        printf("[%d]\t", vetor[linha]);
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
    printf("[%d] ", vetor[linha]);
  }
  printf("\n");
  printf("Soma e [%d]", soma);
  printf("\n");
  printf("Media e [%d] ", media);

  return 0;
}