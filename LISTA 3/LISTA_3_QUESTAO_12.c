/* 12. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem:
"São múltiplos" ou "Não são múltiplos". */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int a, b, maior, menor;

  printf("Digite o numero A:");
  scanf("%d", &a);

  printf("Digite o numero B:");
  scanf("%d", &b);

  if (a > b)
  {
    maior = a;
    menor = b;
  }
  else
  {
    maior = b;
    menor = a;
  }

  if (maior % menor == 0)
  {
    printf("Sao multiplos\n");
  }
  else
  {
    printf("Nao sao multiplos\n");
  }

  system("PAUSE");
  return 0;
}