/* Escreva um programa que leia o peso de um grupo de N pessoas, determine e
imprima o peso médio do grupo. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  // declaração de variaveis
  int contador = 1, n;
  float peso, soma, media, cont;

  // processamento de dados
  printf("Digite o número de pessoas pertecentes:");
  scanf("%d", &n);
  for (cont = 1; cont <= n; cont++)
  {
    printf("Digite o peso da %dºPessoa:", contador++);
    scanf("%f", &peso);
    soma = peso + soma;
  }
  // Saida de dados
  media = soma / n;
  printf("Peso médio do grupo é %.2f\n", media);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}
