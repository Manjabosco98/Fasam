/* 5. Faça um programa que leia dois vetores de N (N<=20) elementos inteiros. Seu programa
deve informar quantas vezes o elemento da primeira posição do primeiro vetor aparece no
segundo vetor. Considerando os dois vetores a seguir o resultado deveria ser 3. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

int main()
{

  int vetor1[5], vetor2[5], i, cont1, cont2, resp, igual;

  igual = 0;
  resp = 0;
  cont1 = 0;
  cont2 = 0;

  // Ler os valores do primeiro vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Valor:", cont1++);
    scanf("%d", &vetor1[i]);
  }
  printf("\n");
  // Ler os valores do segundo vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Valor:", cont1++);
    scanf("%d", &vetor2[i]);
  }
  printf("\n");
  // Mostrar os valores do primero vetor
  printf("Primeiro Vetor ");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor1[i]);
  }
  printf("\n");
  // Mostrar os valores do segundo vetor
  printf("Segundo Vetor ");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor2[i]);
  }
  printf("\n");

  for (i = 0; i < 5; i++)
  {
    if (vetor1[4] == vetor2[i])
    {
      resp++;
    }
    else
    {
      igual++;
    }
  }
  printf("\n");
  printf("Quantidade que o valor do primeiro indice do primeiro vetor aparece no segundo vetor [%d]\n", resp);
  printf("Nenhum numero se repete pois sao deferente! [%d]\n", igual);

  return 0;
}