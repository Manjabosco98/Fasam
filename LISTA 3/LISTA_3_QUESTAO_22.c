/* 22. Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x).

        | 1, se x <= 1
f(x) =  | 2, se 1 < x <= 2
        | x², se 2 < x <= 3
        | x³, se x > 3
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float x, calc;

  printf("Informe o valor de X:");
  scanf("%f", &x);

  if (x <= 1)
  {
    printf("Valor de X:%.2f \n", x);
  }
  else if (x < 1 && x <= 2)
  {
    printf("Valor de X:%.2f \n", x);
  }
  else if (x < 2 && x <= 3)
  {
    calc = pow(x, 2);
    printf("Valor de X:%.2f \n", calc);
  }
  else if (x > 3)
  {
    calc = pow(x, 3);
    printf("Valor de X:%.2f \n", calc);
  }
  else
  {
    printf("Valor X invalido!\n");
  }

  system("PAUSE");
  return 0;
}