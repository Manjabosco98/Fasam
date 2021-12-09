/* 6. Escreva um programa que leia uma matriz quadrada de ordem N (N<=20) valores reais, e
divida cada elemento da matriz pelo elemento da diagonal principal da correspondente
linha. Imprima a matriz após a operação no formato de matriz. */
// Biblioteca
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  float matriz[5][5], matrizResultante[5][5] = {0};
  int linha, coluna;

  // Preenchendo matriz aleatoriamente
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      matriz[linha][coluna] = rand() % 10;
    }
  }
  printf("\n");
  // Mostrando matriz
  printf("Matriz Preenchiada aleatoriamente\n\n");
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      printf("[%.2f]\t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Diagonal Principal \n");
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      if (linha == coluna)
      {
        matrizResultante[linha][coluna] = matriz[linha][coluna];
      }
    }
  }
  printf("\n");
  // Mostrar a diagonal principal da matriz
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      if (linha == coluna)
      {
        printf("[%.2f]\t", matrizResultante[linha][coluna]);
      }
      else
      {
        printf("---\t");
      }
    }
    printf("\n");
  }
  printf("\n");
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      matrizResultante[linha][coluna] = matriz[linha][coluna] / matriz[linha][linha];
    }
  }
  // Mostrando a matriz calculada
  printf("Matriz calculada\n\n");
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 5; coluna++)
    {
      printf("[%.2f]\t", matrizResultante[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
}