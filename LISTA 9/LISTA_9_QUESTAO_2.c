/* 2. Escreva um programa que leia uma matriz A5x6 e um valor X, todos valores reais,
multipliquem a linha 3 da matriz pelo escalar X, armazene o resultado em uma matriz C.
Exiba o resultado na saída. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main()
{

  srand(time(NULL));

  int matriz[5][6], x, MatrizResult[5][6] = {0};
  int linha, coluna;

  printf("Digite um valor pra armazenar na variavel X:");
  scanf("%d", &x);

  // Preenchendo matriz
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 6; coluna++)
    {
      matriz[linha][coluna] = rand() % 11;
    }
  }
  printf("\n");
  // Calculo
  for (linha = 0; linha < 5; linha++)
  {

    MatrizResult[2][linha] = matriz[2][linha] * x;
  }
  printf("\n");
  // Mostrando matriz
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 6; coluna++)
    {
      printf("[%d] ", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");
  // Mostrando matriz resultado
  for (linha = 0; linha < 5; linha++)
  {
    for (coluna = 0; coluna < 6; coluna++)
    {
      printf("[%d] ", MatrizResult[linha][coluna]);
    }
    printf("\n");
  }

  return 0;
}