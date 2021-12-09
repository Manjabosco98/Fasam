/* 5. Faça um programa que leia dois números inteiros, o primeiro é o valor inicial de um
contador, e o segundo é o valor final do contador (o valor inicial fornecido é inferior
ao valor final). Usando o comando WHILE, escreva na tela uma contagem que
comece no primeiro número lido, escreva os números seguintes colocando apenas
um número em cada nova linha da tela, até chegar ao valor final indicado.
Exemplo de tela de saída:
Entre com o número inicial da contagem: 5
Entre com o número final da contagem: 9. 5 6 7 8 9 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int numInicial, numFinal;

  printf("Digite o número inicial:");
  scanf("%d", &numInicial);

  printf("Digite o número final:");
  scanf("%d", &numFinal);

  while (numInicial <= numFinal)
  {
    printf("%d ", numInicial);

    numInicial++;
  }
  printf(" Acabou!\n");

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}