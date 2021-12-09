/* 6. Escreva um programa que leia um valor em real e permita que o usuário informe
a opção para conversão: 1 – dólar e 2 – Euro.
Cotação: Dólar = 3,05 Euro = 3,31 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int n;
  float real, valor_final;

  //ENTRADA
  printf("\n");
  printf("Informe um valor:R$");
  scanf("%f", &real);
  printf("Informe qual opcao deseja --> 1-Dolar ou 2-Euro! ");
  scanf("%d", &n);

  //PROCESSAMENTO
  if (n == 1)
  {
    printf("---> Conversao Real pra Dolar <--- \n");
    valor_final = real / 5.32;
  }
  else if (n == 2)
  {
    printf("---> Conversao Real pra Euro <--- \n");
    valor_final = real / 6.29;
  }
  else
  {
    printf("Opcao invalida!\n");
  }
  printf("\n");

  //SAÌDA
  printf("Valor Real R$%.2f \n", real);
  printf("Valor Final %.2f \n", valor_final);

  system("PAUSE");
  return 0;
}