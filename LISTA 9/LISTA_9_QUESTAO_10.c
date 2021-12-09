/* 10. Agora complete o programa anterior: leia também um vetor Preço[4], contendo o valor de
cada produto comercializado. Seu programa deve determinar e imprimir o valor em reais
(R$) que a empresa tem armazenado em seus 3 depósitos. */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int estoque[4][3], total[4] = {0}, linha, coluna, i = 0, pr = 0;
  float preco[4][3] = {0}, precoTotal[4] = {0};

  // Matriz estoque
  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      estoque[linha][coluna] = rand() % 7;
    }
  }
  printf("\n");
  // Mostrar matriz estoque
  printf("Mapa estoque\n\n");
  printf("       | D1 | D2 | D3 |\n");
  printf("-----------------------\n");
  for (linha = 0; linha < 3; linha++)
  {
    printf("Prod %d |", i++);
    for (coluna = 0; coluna < 3; coluna++)
    {
      printf(" %d  |", estoque[linha][coluna]);
    }
    printf("\n");
    printf("-----------------------\n");
  }
  printf("\n");
  // Calculando a quantidade
  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      total[linha] += estoque[linha][coluna];
    }
  }
  // Mostrar quantidade de estoque
  printf("Quantidade de estoque\n\n");
  printf("Total\n");
  printf("| D1 | D2 | D3 |\n");
  for (linha = 0; linha < 3; linha++)
  {
    printf("| %d  ", total[linha]);
  }
  printf("\n");
  // Preenchendo preço dos produtos de cada deposito aleatorio
  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      preco[linha][coluna] = rand() % 7;
    }
  }
  printf("\n");
  // Mostrar preço dos produtos de cada deposito
  printf("Preco dos produto de cada deposito!\n\n");
  printf("      |   D1   |   D2   |   D3   \n");
  printf("---------------------------------\n");
  for (linha = 0; linha < 3; linha++)
  {
    printf("Prod%d ", pr++);
    for (coluna = 0; coluna < 3; coluna++)
    {
      printf("| R$%.2f ", preco[linha][coluna]);
    }
    printf("\n");
    printf("---------------------------------\n");
  }
  printf("\n");
  // Calculando o preços
  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      precoTotal[linha] += preco[linha][coluna];
    }
  }
  // Mostrar preço total dos produtos
  printf("Preco total dos produtos dos 3 depositos!\n\n");
  printf("Total\n");
  printf("|   D1   |   D2   |   D3   \n");
  for (linha = 0; linha < 3; linha++)
  {
    printf("| R$%.2f ", precoTotal[linha]);
  }
  printf("\n");

  return 0;
}