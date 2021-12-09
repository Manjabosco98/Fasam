/*Escreva um programa que leia um valor em real e permita que o usuário
informe a opção para conversão: 1 – dólar e 2 – Euro.
Cotação:Dólar = 3,05 Euro = 3,31*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int n;
  float conversao, real, conversao_dolar, conversao_euro;

  printf("\n\n");
  printf("Informe um valor:R$");
  scanf("%f", &real);
  printf("\n");
  printf("Informe uma opcao: 1-DOLAR OU 2-EURO:");
  scanf("%d", &n);
  printf("\n");

  if (n == 1)
  {
    conversao = real / 3.05; //conversao real para dolar
    conversao_dolar = conversao * 3.05;
    printf("Real convertido para dolar:$%.2f", conversao);
    printf("\nDolar convertido pro real:R$%.2f", conversao_dolar);
    printf("\n");
  }
  else if (n == 2)
  {
    conversao = real / 3.31; //conversao real para euro
    conversao_euro = conversao * 3.31;
    printf("Real convertido para euro:%.2f", conversao);
    printf("\nEuro convertido pra real:R$%.2f", conversao_euro);
    printf("\n\n");
  }
  else
  {
    printf("Opcao informada invalida!");
    printf("\n");
  }

  system("PAUSE");
  return 0;
}