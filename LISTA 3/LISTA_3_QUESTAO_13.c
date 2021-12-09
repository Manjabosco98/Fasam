/* 13. Elaborar um algoritmo que lê 3 valores a, b, c e verifica se eles formam ou não
um triângulo. Supor que os valores lidos são inteiros e positivos. Caso os
valores formem um triângulo, calcular e escrever a área deste triângulo. Se não
formam triângulo escrever os valores lidos (se a > b + c não formam triângulo
algum, se a é o maior). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int a, b, c, p, area;

  printf("Digite um valor de A:");
  scanf("%d", &a);

  printf("Digite um valor de B:");
  scanf("%d", &b);

  printf("Digite um valor de C:");
  scanf("%d", &c);

  if (a + b > c && a + c > b && b + c > a)
  {
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Os Tres valores A, B, C forman um triangulo! \n");
    printf("Area do triangulo e %d \n", area);
    if ((a == b) && (b == c))
    {
      printf("Triangulo Equilatero!\n");
    }
    else if ((a != b) && (a != c) && (b != c))
    {
      printf("Triangulo Escaleno!\n");
    }
    else
    {
      printf("Triangulo Isosceles!\n");
    }
  }
  else
  {
    printf("Os tres valores A, B, C nao forma um triangulo! \n");
  }

  system("PAUSE");
  return 0;
}