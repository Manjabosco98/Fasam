/* 3. Escreva um algoritmo que leia um número e imprima a raiz quadrada do número
caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja
negativo.
#Dica: Use o método sqrt() para calcular a raiz. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int num;
  double raiz, calc;

  printf("Informe um numero:");
  scanf("%d", &num);

  if (num > 0)
  {
    raiz = sqrt(num);
    printf("Raiza quadrado do numero informado e %lf \n", raiz);
    printf("Numero informado e positivo!\n");
  }
  else if (num < 0)
  {
    calc = pow(num, 2);
    printf("Calculo do numero numero informado e %lf \n", calc);
    printf("Numero informado e negativo!\n");
  }
  else
  {
    printf("Numero informado e nulo!\n");
  }

  system("PAUSE");
  return 0;
}