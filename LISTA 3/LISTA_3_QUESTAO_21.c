/* 21. Dados três valores A, B e C, construa um algoritmo para verificar se estes
valores podem ser valores dos lados de um triângulo, e se for, classificá-los
(imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo
Obtusângulo > 90º e Triângulo Acutângulo < 90º). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int a, b, c, triangulo;

  printf("Digite o valor A:");
  scanf("%d", &a);

  printf("Digite o valor B:");
  scanf("%d", &b);

  printf("Digite o valor C:");
  scanf("%d", &c);

  triangulo = a + b + c;

  if (triangulo > 90 && triangulo < 180)
  {
    printf("Triangulo Obtusangulo %d \n", triangulo);
  }
  else if (triangulo < 90)
  {
    printf("Triangulo Acutangulo %d \n", triangulo);
  }
  else if (triangulo == 180)
  {
    printf("Triangulo Retangulo %d", triangulo);
  }
  else
  {
    printf("Nao forma um triangulo \n");
  }

  system("PAUSE");
  return 0;
}