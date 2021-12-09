/* Escreva um programa para calcular e escrever o valor do número π, dado pelos
1000 primeiros termos da série a seguir: π = 4 – 4/3 + 4/5 – 4/7 + 4/9 – 4/11 + ... 6. */
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
  SetConsoleTitle("Lista 7 Exercicio 5!");

  int num, cont, cont2;
  float pi = 0;

  printf("Digite um número:");
  scanf("%d", &num);
  for (cont = 1; cont <= num; cont = cont + 2)
  {
    if (cont2 % 2 == 0)
    {
      pi = pi + 4 / (float)cont;
    }
    else if (cont2 % 2 != 0)
    {
      pi = pi - 4 / (float)cont;
    }
    cont2++;
  }
  printf("Valor de PI é %.2f\n", pi);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}