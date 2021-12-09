/* 11. Elaborar um algoritmo que lê 3 valores a, b, c e os escreve. A seguir, encontre
o maior dos 3 valores e o escreva com a mensagem: "É o maior ". */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b, c;

  printf("Digite um numero A:");
  scanf("%d", &a);

  printf("Digite um numero B:");
  scanf("%d", &b);

  printf("Digite um numero C:");
  scanf("%d", &c);

  if (a > b && a > c)
  {
    printf("A e maior! \n");
  }
  else if (b > c && b > a)
  {
    printf("B e maior! \n");
  }
  else if (c > b && c > a)
  {
    printf("C e maior! \n");
  }
  else
  {
    printf("A B C sao iguais! \n");
  }

  system("PAUSE");
  return 0;
}