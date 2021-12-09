/* 5. Escreva um programa para ler dois números inteiros M e N e, a seguir, verificar
se eles são idênticos. Caso não sejam iguais, solicitar ao usuário que digite
novamente o segundo número até que o digite igual ao primeiro. Imprimir a
quantidade de tentativas que o usuário precisou para digitar os dois números iguais. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int num1, num2, tentativas;

  tentativas = 0;

  do
  {
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    printf("Digite novamente os números para que os dois sejam iguais! \n");
    tentativas++;
  } while (num1 != num2);
  printf("Os dois números digitados são iguais -> %d e %d \n", num1, num2);
  printf("Tentativas %d", tentativas);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}