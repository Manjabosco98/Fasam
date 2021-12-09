/* Escreva um programa que apresente quatro opções: (a) consulta saldo, (b) saque e
(c)depósito e (d) sair. O saldo deve iniciar em R$ 0,00. A cada saque ou depósito o
valor do saldo deve ser atualizado. */
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

  float saldo = 0, saque = 0, deposito = 0;
  int op;

  printf("\t\tBanco Do Povo! \n");
  do
  {
    printf("Escolha um opção\n (1)Saque\n (2)Depósito\n (3)Consulta Saldo\n (4)Sair\n");
    scanf("%d", &op);
    printf("\n");
    switch (op)
    {
    case 1:
      printf("Digite o valor que desejar sacar R$");
      scanf("%f", &saque);
      saldo = saldo - saque;
      printf("Saque de R$%.2f efetuado com sucesso...\n", saque);
      break;
    case 2:
      printf("Digite o valor que deseja depositar R$");
      scanf("%f", &deposito);
      saldo = deposito + saldo;
      printf("Depósito de R$%.2f efetuado com sucesso...\n", deposito);
      break;
    case 3:
      printf("Saldo disponível R$%.2f\n", saldo);
      break;
    default:
      printf("Escolha uma opção valída!\n");
      break;
    }
    printf("\n");
  } while (op != 4);
  printf("Finalizando! \n");

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}