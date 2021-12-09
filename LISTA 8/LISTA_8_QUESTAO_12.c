/* 12. Escreva um programa que leia dois vetores com 10 números inteiros, cada um,
calcule e mostre um terceiro vetor como sendo a soma dos dois primeiros. */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <time.h>

int main()
{

  int vetor1[5], vetor2[5], soma[5], i;

  // Prenchendo vetor 1
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Numero: ", i + 1);
    scanf("%d", &vetor1[i]);
  }
  printf("\n");
  // Preenchendo vetor 2
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Numero: ", i + 1);
    scanf("%d", &vetor2[i]);
  }
  printf("\n");
  // Soma dos dois vetores
  for (i = 0; i < 5; i++)
  {
    soma[i] = vetor1[i] + vetor2[i];
  }
  printf("\n");
  // Mostrando vetor 1
  printf("Primeiro Vetor ");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor1[i]);
  }
  printf("\n");
  // Mostrando vetor 2
  printf("Segundo Vetor ");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor2[i]);
  }
  printf("\n");
  // Mostrar a soma dos dois vetores
  printf("Soma dos dois vetores ");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", soma[i]);
  }

  return 0;
}