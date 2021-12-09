/*1. Escreva um programa que leia três números inteiros e positivos (A, B, C) e
calcule a seguinte expressão: D = R + S / 2, onde R = (A + B)² e S = (B + C)²*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int a, b, c, d;

  printf("\n");
  printf("Informe um valor de A:");
  scanf("%d", &a);

  printf("Informe um valor de B:");
  scanf("%d", &b);

  printf("Informe um valor de2 C:");
  scanf("%d", &c);

  //d = ((a + b) * (a + b) + ((b + c) * (b + c))) / 2;
  d = (pow(a + b, 2) + pow(b + c, 2)) / 2;

  printf("O Resultado da expressao D:%d", d);
  printf("\n");

  system("PAUSE");
  return 0;
}