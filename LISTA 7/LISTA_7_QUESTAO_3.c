/* Escreva um programa que leia o valor de N, determine e imprima o valor de H, dado
pela série a seguir: H = 1 - 1/2 + 1/3 - 1/4 + ... + 1/N */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int num, cont;
  float h = 0;

  printf("Digite um número:");
  scanf("%d", &num);
  for (cont = 1; cont <= num; cont++)
  {
    if (cont % 2 == 0)
    {
      h = h - (1.0 / cont);
    }
    else
    {
      h = h + (1.0 / cont);
    }
  }
  printf("Valor de H é %f\n", h);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}