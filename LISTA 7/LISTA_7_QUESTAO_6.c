/* Escreva um algoritmo que calcule e escreva a soma dos dez primeiros termos da
seguinte série: 2/500 – 5/450 + 2/400 – 5/350 + … 7. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int cont, cont2 = 1, num;
  float soma, divisao;

  for (cont = 500; cont > 0; cont = cont - 50)
  {
    if (cont2 % 2 == 0)
    {
      divisao = (float)5 / (float)cont;
      soma = soma - divisao;
    }
    else if (cont2 % 2 != 0)
    {
      divisao = (float)2 / (float)cont;
      soma = soma + divisao;
    }
    cont2++;
  }
  printf("Valor do termo é %.2f\n", soma);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}