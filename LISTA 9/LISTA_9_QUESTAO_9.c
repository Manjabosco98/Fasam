/* 9. Escreva um programa que leia uma matriz Estoque[4][3], de valores inteiros, contendo o
estoque em 3 depósitos de cada um dos 4 produtos de uma empresa. Seu programa deve
calcular o total de cada produto e armazenar no vetor Total[4]. Ao final imprimir um mapa
contendo os estoques por depósito (a matriz) e o estoque total de cada produto (o vetor). */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main()
{
  srand(time(NULL));
  int estoque[4][3], total[4] = {0}, linha, coluna, i = 0;
  // Matriz estoque
  for (linha = 0; linha < 4; linha++)
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      estoque[linha][coluna] = rand() % 7;
    }
  }
  printf("\n");
  // Mostrar matriz estoque
  printf("Mapa estoque\n\n");
  printf("      D1  D2  D3\n");
  for (linha = 0; linha < 4; linha++)
  {
    printf("Prod%d", i++);
    for (coluna = 0; coluna < 3; coluna++)
    {
      printf("[%d] ", estoque[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");
  // Calculando a quantidade
  for (linha = 0; linha < 4; linha++)
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      total[linha] += estoque[linha][coluna];
    }
  }
  // Mostrar quantidade de estoque
  printf("Quantidade de estoque\n\n");
  printf("Total\n");
  for (linha = 0; linha < 4; linha++)
  {
    printf("[%d]\t\n", total[linha]);
  }
  return 0;
}