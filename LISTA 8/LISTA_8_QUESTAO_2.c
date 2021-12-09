/* 2. Faça um programa que receba 2 sequencias de 5 valores e gere um vetor com os valores
comuns a ambas as sequencias. Inicialize o vetor resultado com 0's em todas as casas. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int main()
{
  int vetor1[5], vetor2[5], vetor3[5] = {0}, i, cont1 = 0, cont2 = 0, res = 0;

  // Ler valores para o primeiro vetor.
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Valor:", cont1++);
    scanf("%d", &vetor1[i]);
  }
  printf("\n");
  // Ler valores para o segundo vetor.
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Valor:", cont2++);
    scanf("%d", &vetor2[i]);
  }
  printf("\n");
  // Mostrar valores do primeiro vetor
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor1[i]);
  }
  printf("\n");
  // Mostrar valores do segundo vetor
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor2[i]);
  }
  printf("\n");

  for (int cont = 0; cont < 5; cont++)
  {
    for (i = 0; i < 5; i++)
    {
      if (vetor1[cont] == vetor2[i])
      {
        vetor3[res] = vetor1[cont];
        res++;
      }
    }
  }

  // Mostrar o valores do vetor 3
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor3[i]);
  }
  printf("\n");

  return 0;
}