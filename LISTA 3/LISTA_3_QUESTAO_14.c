/* 14. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um
valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A
seguir:
a) Se i=1 escrever os três valores a, b, c em ordem crescente.
b) Se i=2 escrever os três valores a, b, c em ordem decrescente.
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;
  float a, b, c;

  printf("Digite um valor:");
  scanf("%d", &i);

  printf("Digite o valor de A:");
  scanf("%f", &a);
  printf("Digite o valor de B:");
  scanf("%f", &b);
  printf("Digite o valor de C:");
  scanf("%f", &c);

  if (i == 1)
  {
    if (a > b && a > c && b > c)
    {
      printf("Valores em ordem crescentes %.1f %.1f %.1f \n", a, b, c);
    }
    else if (b > a && b > c && a > c)
    {
      printf("Valores em ordem crescentes %.1f %.1f %.1f \n", b, a, c);
    }
    else if (c > a && c > b && b > a)
    {
      printf("Valores em ordem crescentes  %.1f %.1f %.1f \n", c, b, a);
    }
  }
  else if (i == 2)
  {
    if (a > b && a > c && b > c)
    {
      printf("Valores em ordem decrescentes %.1f %.1f %.1f \n", c, b, a);
    }
    else if (b > a && b > c && a > c)
    {
      printf("Valores em ordem decrescentes %.1f %.1f %.1f \n", c, a, b);
    }
    else if (c > a && c > b && b > a)
    {
      printf("Valores em ordem decrescentes %.1f %.1f %.1f \n", a, b, c);
    }
    else
    {
      printf("valores sao iguais %.1f %.1f %.1f \n", a, b, c);
    }
  }
  else if (i == 3)
  {
    if (a > b && a > c)
    {
      printf("Valor maior no meio %.1f %.1f %.1f \n", b, a, c);
    }
    else if (b > a && b > c)
    {
      printf("Valor maior no meio %.1f %.1f %.1f \n", a, b, c);
    }
    else if (c > a && c > b)
    {
      printf("Valor maior no meio %.1f %.1f %.1f \n", a, c, b);
    }
    else
    {
      printf("Valores iguais %.1f %.1f %.1f \n", a, b, c);
    }
  }
  else
  {
    printf("Valores invalidos \n");
  }

  system("PAUSe");
  return 0;
}