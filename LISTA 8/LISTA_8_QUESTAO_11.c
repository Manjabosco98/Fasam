/* 11. Construa um algoritmo que gere um vetor de 50 elementos reais, da seguinte forma: a
primeira e a última posição com o valor 100 e as demais posições do vetor deverão ser
preenchidas com a soma do quadrado do índice do elemento anterior e a raiz quadrada do
índice do elemento seguinte. Ao final imprima o vetor gerado. Os elementos serão: */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

  float num[50];
  int i;

  num[0] = 100;
  num[49] = 100;

  // add valores aos vetores.
  for (i = 1; i <= 48; i++)
  {
    num[i] = pow(i - 1, 2) + sqrt(i + 1);
  }
  printf("\n");
  // Mostrar vetores.
  for (i = 0; i < 50; i++)
  {
    printf("[%.2f] \n", num[i]);
  }
  printf("\n");
  return 0;
}