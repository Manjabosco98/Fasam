/* 2. Construir um algoritmo que leia dois números e efetue a adição. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais
8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int n1, n2, adicao;

  printf("Informe o primeiro numero:");
  scanf("%d", &n1);

  printf("Informe o segundo numero:");
  scanf("%d", &n2);

  adicao = n1 + n2;

  if (adicao > 20)
  {
    adicao = adicao + 8;
    printf("Valor somado maior que 20 e somado mais 8 e:(%d + %d) + 8 = %d", n1, n2, adicao);
  }
  else
  {
    adicao = adicao - 5;
    printf("Valor somado menor que 20 e subtraido por 5 e:(%d + %d) - 5 = %d", n1, n2, adicao);
  }
  printf("\n\n");
  system("PAUSE");
  return 0;
}