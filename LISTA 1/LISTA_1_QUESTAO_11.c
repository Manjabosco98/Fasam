/*Escrever um algoritmo que leia dois valores inteiro distintos e informe qual é
o maior.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int a, b;

  printf("\n\n");
  printf("Informe um valor pra A:");
  scanf("%d", &a);
  printf("Informe um valor pra B:");
  scanf("%d", &b);

  if (a > b)
  {
    printf("A e maior que B!");
    printf("\n\n");
  }
  else if (b > a)
  {
    printf("B e maior que A!");
    printf("\n\n");
  }
  else if (a == b)
  {
    printf("A e B sao iguais!");
    printf("\n\n");
  }
  else
  {
    printf("Numeros informados pelo usuario sao invalidos!");
    printf("\n\n");
  }

  printf("\n");

  system("PAUSE");
  return 0;
}