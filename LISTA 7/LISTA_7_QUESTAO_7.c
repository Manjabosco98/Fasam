/* Escreva um programa que leia um conjunto de N números inteiros e mostre qual
foi o maior valor fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int qtd, cont, num, maior;

  printf("Digite um número para quantidade de vezes:");
  scanf("%d", &qtd);
  for (cont = 1; cont <= qtd; cont++)
  {
    printf("Digite o número:");
    scanf("%d", &num);

    if (cont == 1)
    {
      maior = num;
    }
    else if (maior < num)
    {
      maior = num;
    }
  }
  printf("Maior número é %d\n", maior);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}
