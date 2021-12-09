/* 10. Tendo como dados de entrada a altura e o sexo de uma pessoa (‘M’ masculino
e ‘F’ feminino), construa um programa que calcule seu peso ideal, utilizando as
seguintes fórmulas:
- para homens: (72.7*h) - 58
- para mulheres: (62.1*h) - 44.7 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  char sexo;
  float altura, peso_ideal;

  printf("\n\n");
  printf("Informe a altura do usuario:");
  scanf("%f", &altura);

  printf("Informe o sexo do usuario --> M-masculino ou F-femenino =>");
  scanf("%s", &sexo);

  if (sexo == 'M')
  {
    printf("---> MASCULINO <---\n");
    peso_ideal = (72.7 * altura) - 58;
    printf("Peso Ideal do usuario  e %.2f \n", peso_ideal);
  }
  else if (sexo == 'F')
  {
    printf("---> FEMENINO <---\n");
    peso_ideal = (62.1 * altura) - 44.7;
    printf("Peso Ideal do usuario e %.2f \n", peso_ideal);
  }
  printf("\n\n");
  system("PAUSE");
  return 0;
}