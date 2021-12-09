/* 13. Escreva um programa que leia dois vetores – V1 e V2 – cada um com N (N ≤ 10)
valores reais e um terceiro vetor – Op - com N valores do tipo caracter. Seu programa
deve gerar um vetor – Resul como sendo o resultado das operações de V1 com V2,
onde o código da operação está no vetor Op nas respectivas posições. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int main()
{

  float vetor1[5], vetor2[5], resul[5];
  int i;
  char op[5];

  // Preenchendo o primeiro vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d numero do vetor:", i + 1);
    scanf("%f", &vetor1[i]);
  }
  printf("\n");
  // Preenchendo o segundo vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d numero do vetor:", i + 1);
    scanf("%f", &vetor2[i]);
  }
  printf("\n");
  // Preenchendo o vetor dos codigo
  for (i = 0; i < 5; i++)
  {
    printf("Digite a %d Operacao do vetor:", i + 1);
    scanf(" %c", &op[i]);
  }
  printf("\n");
  for (i = 0; i < 5; i++)
  {
    if (op[i] == '/')
    {
      resul[i] = vetor1[i] / vetor2[i];
    }
    else if (op[i] == '*')
    {
      resul[i] = vetor1[i] * vetor2[i];
    }
    else if (op[i] == '-')
    {
      resul[i] = vetor1[i] - vetor2[i];
    }
    else if (op[i] == '+')
    {
      resul[i] = vetor1[i] + vetor2[i];
    }
    else
    {
      resul[i] = vetor1[i] * vetor2[i];
    }
  }
  printf("\n");
  // Mostrando o primeiro vetor
  printf("Primeiro Vetor ");
  for (i = 0; i < 5; i++)
  {
    printf("[%.1f] ", vetor1[i]);
  }
  printf("\n");
  // Preenchendo o segundo vetor
  printf("Segundo Vetor ");
  for (i = 0; i < 5; i++)
  {
    printf("[%.2f] ", vetor2[i]);
  }
  printf("\n");
  // Mostrando vetor result
  printf("Resultado ");
  for (i = 0; i < 5; i++)
  {
    printf("[%.2f] ", resul[i]);
  }

  return 0;
}