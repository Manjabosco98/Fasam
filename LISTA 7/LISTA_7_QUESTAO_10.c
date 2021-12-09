/* Escreva um algoritmo que leia um conjunto de N números inteiros e mostre qual
foi o maior e o menor e o maior valor fornecido.*/

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

  int qtd, cont, num, maior = 0, menor = 99999, contador = 1;

  printf("Digite um número para quantidade de vezes:");
  scanf("%d", &qtd);
  for (cont = 1; cont <= qtd; cont++)
  {
    printf("Digite o %dºnúmero:", contador++);
    scanf("%d", &num);

    if (cont == 1)
    {
      maior = num;
      menor = num;
    }

    if (maior < num)
    {
      maior = num;
    }
    else if (menor > num)
    {
      menor = num;
    }
  }
  printf("Maior número é %d\n", maior);
  printf("Menor número é %d\n", menor);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}
