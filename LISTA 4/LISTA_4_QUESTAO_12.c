/* 12. Implemente um programa que leia 3 valores a, b e c. Permita que o
usuário escolha a forma (ordem) de imprimir esses valores. Utilize para
este fim a estrutura switch... case.
a) Se i=1 escrever os três valores a, b, c em ordem crescente.
b) Se i=2 escrever os três valores a, b, c em ordem decrescente.
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre
a, b, c fique dentre os dois. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int op, a, b, c;

  printf("Informe um numero A:");
  scanf("%d", &a);

  printf("Informe um numero B:");
  scanf("%d", &b);

  printf("Informe um numero C:");
  scanf("%d", &c);

  printf(" 1-Ordem crescente A B C\n 2-Ordem decrescente C B A\n 3-Maior entre os dois menores\n");
  scanf("%d", &op);
  switch (op)
  {
  case 1:
    if (a > b && a > c && b > c)
    {
      printf("%d %d %d \n", c, b, a);
    }
    else if (a > b && a > c && c > b)
    {
      printf("%d %d %d \n", b, c, a);
    }
    else if (b > a && b > c && a > c)
    {
      printf("%d %d %d \n", c, a, b);
    }
    else if (b > a && b > c && c > a)
    {
      printf("%d %d %d \n", b, c, a);
    }
    else if (c > a && c > b && a > b)
    {
      printf("%d %d %d \n", b, a, c);
    }
    else if (c > a && c > b && b > a)
    {
      printf("%d %d %d \n", a, b, c);
    }
    break;
  case 2:
    if (a > b && a > c && b > c)
    {
      printf("%d %d %d \n", a, b, c);
    }
    else if (a > b && a > c && c > b)
    {
      printf("%d %d %d \n", a, c, b);
    }
    else if (b > a && b > c && a > c)
    {
      printf("%d %d %d \n", b, a, c);
    }
    else if (b > a && b > c && c > a)
    {
      printf("%d %d %d \n", b, c, a);
    }
    else if (c > a && c > b && a > b)
    {
      printf("%d %d %d \n", c, a, b);
    }
    else if (c > a && c > b && b > a)
    {
      printf("%d %d %d \n", c, b, a);
    }
    break;
  case 3:
    if (a > b && a > c)
    {
      printf("%d %d %d \n", b, a, c);
    }
    else if (b > a && b > c)
    {
      printf("%d %d %d \n", a, b, c);
    }
    else
    {
      printf("%d %d %d \n", a, c, b);
    }
    break;
  default:
    printf("Erro...Encerrando Sistema em 2 segundos...\n");
  }

  system("PAUSE");
  return 0;
}
