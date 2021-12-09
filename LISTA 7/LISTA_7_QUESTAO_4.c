/* Escreva um programa que calcule e escreva a soma dos 10 primeiros termos da
seguinte série: 1/2 + 2/4 + 3/6 + 4/8 ... */
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

  int num, cont, cont2;
  float soma, divisao;

  printf("Digite um número:");
  scanf("%d", &num);
  for (cont = 1; cont <= num; cont++)
  {
    cont2 = cont * 2;
    divisao = (float)cont / (float)cont2;
    soma = soma + divisao;
  }
  printf("Valor do termo é %.1f\n", soma);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}