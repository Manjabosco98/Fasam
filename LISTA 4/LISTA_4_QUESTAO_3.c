/* 3. Criar um programa que leia dois números inteiros, e que solicite ao
usuário qual a operação deseja realizar entre esses números. Caso o
usuário digitar o caractere “*” será realizada uma multiplicação, caso
seja digitado o caractere “/” será realizada uma divisão, caso seja
digitado o caractere “+” será realizado uma adição, e caso seja digitado
o caractere “–” será realizada uma subtração. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

  char operacao;
  int num1, num2, result;

  printf("Informe o primeiro numero:");
  scanf("%d", &num1);

  printf("Informe o segundo numero:");
  scanf("%d", &num2);

  printf("Escolha a operacao aritmetica *-mult +-soma --sub /-div? ");
  scanf("%s", &operacao);
  printf("\n");

  switch (operacao)
  {
  case '*':
    result = num1 * num2;
    printf("Resultado: %d * %d = %d \n", num1, num2, result);
    break;
  case '+':
    result = num1 + num2;
    printf("Resultado: %d + %d = %d \n", num1, num2, result);
    break;
  case '-':
    result = num1 - num2;
    printf("Resultado: %d - %d = %d \n", num1, num2, result);
    break;
  case '/':
    result = num1 / num2;
    printf("Resultado: %d / %d = %d \n", num1, num2, result);
    break;
  default:
    printf("Opcao Invaldia!\n");
  }

  system("PAUSE");
  return 0;
}