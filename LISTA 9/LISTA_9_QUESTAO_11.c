/* 11. Aproveite ainda o programa do exercício anterior para determinar e imprimir qual o
depósito que tem menor quantidade de mercadoria. Para isto, gere o vetor Deposito, com
3 elementos, cada um sendo o total de mercadoria de um depósito e, determine o de
menor quantidade. */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int estoque[4][3], total[4] = {0}, linha, coluna, i = 0, pr = 0, menor;
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

  menor = total[1];

  for (linha = 0; linha < 3; linha++)
  {
    if (total[linha] < menor)
    {
      menor = total[linha];
    }
  }
  printf("\n");
  printf("O deposito com menor produto e %d ", menor);
  printf("\n");
  //------------------------------------------------------------------------------------------------
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