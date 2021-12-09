/* 9. Escreva um algoritmo que leia 10 valores inteiros, armazene-os em um vetor, determine e
imprima a soma dos elementos de índices ímpares. Isto é: vet[1]+vet[3]+vet[5]+... */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()
{

  int vetor[5], soma = 0, i, cont;

  cont = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Valor do vetor:", cont++);
    scanf("%d", &vetor[i]);

    if (vetor[i] % 2 == 1)
    {
      soma = soma + vetor[i];
    }
  }
  printf("\n");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor[i]);
  }
  printf("\n");

  printf("[%d] ", soma);

  return 0;
}