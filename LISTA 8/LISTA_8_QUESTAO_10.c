/* 10. Escreva um programa que preencha um vetor de 10 elementos reais, da seguinte
forma:
• o elemento de índice zero seja igual a 1;
• os elementos de índices pares sejam iguais a 3/5 do valor do índice e,
• os elementos de índices ímpares sejam o quadrado do valor do índice.
Isto é: Num[0]=1; Num[2]=2*3/5 e, Num[3]=3*3 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

int main()
{
  int vetor[10], i, cont;

  vetor[0] = 1;
  cont = 1;

  // Informar valores pro  vetor
  for (i = 1; i < 10; i++)
  {
    if (i % 2 == 0)
    {
      vetor[i] = i * (3 / 5.0);
    }
    else if (i % 2 == 1)
    {
      vetor[i] = i * i;
    }
  }
  printf("\n");
  // Mostrar valores do vetor
  for (i = 0; i < 10; i++)
  {
    printf("[%d] ", vetor[i]);
  }
  printf("\n");

  return 0;
}