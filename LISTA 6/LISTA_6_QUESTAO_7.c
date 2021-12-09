/* 7. Faça um programa que leia dois valores inteiros x e y, e que calcule e mostre a
potência xy. Obs. Sem utilizar funções de math.h, como a pow(). */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int x, n, potencia, contador;
  // x recebe a base
  // n expoente
  // potencia guarda as potencias parciais
  SetConsoleTitle("Cálculo de Potencias");
  printf("--------------------\n");
  printf("Calculo de potencias\n");
  printf("--------------------\n");

  // recebe a base
  printf("Digite um número inteiro: ");
  scanf("%d", &x);
  // recebe o expoente
  printf("Digite um número inteiro não-negativo: ");
  scanf("%d", &n);

  potencia = 1;
  contador = 0;

  // calculo da potencia
  do
  {
    potencia = potencia * x;
    contador = contador + 1;
  } while (contador != n);
  printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}