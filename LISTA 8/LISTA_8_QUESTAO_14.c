/* 14. Escreva um programa que determine o maior elemento de um vetor e o coloque
na última posição do mesmo. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define n 5
int main()
{
  int vetor[n], maior;
  printf("Digite os termos do vetor.\n");
  for (int cont = 0; cont < n - 1; cont++)
  {
    printf("|> ");
    scanf("%d", &vetor[cont]);
  }
  for (int cont = 0; cont < n - 1; cont++)
  {
    if (cont == 0)
    {
      maior = vetor[cont];
    }
    else if (vetor[cont] > maior)
    {
      maior = vetor[cont];
    }
  }
  vetor[n - 1] = maior;
  printf("|>Disposicao dos valores no vetor.\n");
  printf("|>Termo\t|Numero\n");
  for (int cont = 0; cont < n; cont++)
  {
    printf("|> %d\t|%d\n", cont, vetor[cont]);
  }
  return 0;
}