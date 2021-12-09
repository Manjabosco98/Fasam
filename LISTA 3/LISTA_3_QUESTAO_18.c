/* 18. Construa um algoritmo para determinar se o indivíduo está com um peso
favorável. Essa situação é determinada através do IMC (Índice de Massa
Corpórea), que é definida como sendo a relação entre o peso (PESO) e o
quadrado da Altura (ALTURA) do indivíduo. Ou seja,
IMC = PESO / ALTURA2 e, a situação do peso é determinada pela tabela abaixo: 
Condição Situação               |  Situação
IMC abaixo de 20  |  Abaixo do peso
IMC de 20 até 25  |  Peso Normal
IMC de 25 até 30  |  Sobre Peso
IMC de 30 até 40  |  Obeso
IMC de 40 e acima |  Obeso Mórbido */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float peso, altura, imc;

  printf("Digite o seu peso:");
  scanf("%f", &peso);

  printf("Digite a sua altura:");
  scanf("%f", &altura);

  imc = peso / pow(altura, 2);

  if (imc < 20)
  {
    printf("Abaixo Normal %.2f \n", imc);
  }
  else if (imc > 20 && imc < 25)
  {
    printf("Peso Normal %.2f \n", imc);
  }
  else if (imc > 25 && imc < 30)
  {
    printf("Sobre Peso %.2f \n", imc);
  }
  else if (imc > 30 && imc < 40)
  {
    printf("Obeso %.2f \n", imc);
  }
  else
  {
    printf("Obeso Morbido %.2f \n", imc);
  }

  system("PAUSE");
  return 0;
}