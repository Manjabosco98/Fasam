/*Faça um programa que leia as 3 notas de um aluno e calcule a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é:
2, 3 e 5, respectivamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float n1, n2, n3, p1, p2, p3, media;

  printf("Informe a primeira nota:");
  scanf("%f", &n1);

  printf("Informe a segunda nota:");
  scanf("%f", &n2);

  printf("Informe a terceira nota:");
  scanf("%f", &n3);

  p1 = 2;
  p2 = 3;
  p3 = 5;

  media = ((n1 + p1) + (n2 + p2) + (n3 + p3)) / 3;

  printf("A Media final do aluno e:%.1f", media);
  printf("\n");

  system("PAUSE");
  return 0;
}