/* 17. Dados três valores A, B e C, construa um algoritmo, que imprima os valores de
forma ascendente (do menor para o maior). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int a, b, c;

  printf("Digite o numero A:");
  scanf("%d", &a);
  printf("Digite o numero B:");
  scanf("%d", &b);
  printf("Digite o numero C:");
  scanf("%d", &c);

  if (a > b && a > c)
  {
    printf("%d %d %d \n", c, b, a);
  }
  else if (b > a && b > c && c > a)
  {
    printf("%d %d %d \n", a, c, b);
  }
  else if (c > a && c > b && b > a)
  {
    printf("%d %d %d \n", a, b, c);
  }
  else
  {
    printf("A B e C sao iguais %d %d %d \n", a, b, c);
  }

  printf("\n\n");

  system("PAUSE");
  return 0;
}