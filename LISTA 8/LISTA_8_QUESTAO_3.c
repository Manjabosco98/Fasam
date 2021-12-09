/* 3. Faça um algoritmo que leia um vetor de nove elementos inteiros, calcule e mostre os
números ímpares e suas respectivas posições. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>

int main()
{
  int vetor[9], soma, impar, i, cont;

  soma = 0;
  impar = 0;
  cont = 0;

  for (i = 0; i < 9; i++)
  {
    printf("Digite o %d valor do vetor:", cont++);
    scanf("%d", &vetor[i]);
  }
  printf("\n");
  for (i = 0; i < 9; i++)
  {
    soma = soma + vetor[i];
  }
  printf("\n");
  for (i = 0; i < 9; i++)
  {
    if (vetor[i] % 2 == 1)
    {
      printf("Numero impar %d da posicao %d\n", vetor[i], i);
    }
    else
    {
      printf("Numero par %d da posicao %d\n", vetor[i], i);
    }
  }
  printf("\n");
  printf("Resultado do calculo %d ", soma);
  return 0;
}