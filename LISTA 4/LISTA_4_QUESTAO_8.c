/* 8. Faça um programa que receba duas notas, calcule e mostre a média
aritmética e mensagem que está na tabela a seguir
Média Aritmética  |  Mensagen 
   0,0 - 4,0      |  Reprovado
   4,1 - 7,0      |  Exame
   7,1 - 10,0     |  Aprovado */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float n1, n2, media;
  int n, op;

  printf("Informe a primeira nota:");
  scanf("%f", &n1);

  printf("Informe a segunda nota:");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  if (media >= 0.0 && media <= 4.0)
  {
    op = 1;
  }
  else if (media >= 4.1 && media <= 7.0)
  {
    op = 2;
  }
  else if (media >= 7.1 && media <= 10)
  {
    op = 3;
  }

  printf("--> 1-Reprovado 2-Exame 3-Aprovado? <-- ");
  printf("\n");

  switch (op)
  {
  case 1:
    printf("Infelizmente voce foi reprovado...\n");
    printf("Media %.2f\n", media);
    break;
  case 2:
    printf("Voce ficou de exame...\n");
    printf("Media %.2f\n", media);
    break;
  case 3:
    printf("Parabens voce foi aprovado...\n");
    printf("Media %.2f\n", media);
    break;
  default:
    printf("Opcao Invalida!\n");
  }

  system("PAUSE");
  return 0;
}
