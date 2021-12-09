/* 7. Escreva um programa que preencha um vetor com N (N ≤ 20) números inteiros, calcule e
mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números
positivos; o segundo deve conter os números negativos. Cada vetor resultante vai ter, no
máximo, N posições, que poderão não ser completamente utilizadas. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

int main()
{

  int vetor[5], positivos[5] = {0}, negativos[5] = {0}, i, cont1;

  cont1 = 0;

  // Ler os valores do vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d valor:", cont1++);
    scanf("%d", &vetor[i]);

    if (vetor[i] > 0)
    {
      positivos[i] = vetor[i];
    }
    else
    {
      negativos[i] = vetor[i];
    }
  }
  printf("Numeros positivos\n");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", positivos[i]);
  }
  printf("\n");
  printf("Numeros negativos\n");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", negativos[i]);
  }

  return 0;
}