/* 11. Criar um programa para calcular o valor da multa a ser paga de
anuidade de uma associação. A anuidade deve ser paga no mês de
janeiro. Por mês, é cobrado 5% de juros (com juros sobre juros). Por
exemplo, uma associação de R$100 paga em janeiro, custa R$ 100; em
fevereiro, custa R$105; em março, custa R$110,25; e, em dezembro,
R$171,03. */

#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{

  float valor_multa;
  int op;

  printf(" 1-Janeiro\n 2-Fevereiro\n 3-Marco\n 4-Dezembro\n");
  scanf("%d", &op);
  switch (op)
  {
  case 1:
    valor_multa = (100 * 0.5) + 100;
    printf("Multa a ser paga em Janeiro R$%.2f\n", valor_multa);
    break;
  case 2:
    valor_multa = (105 * 0.5) + 105;
    printf("Multa a ser paga em Fevereiro R$%.2f\n", valor_multa);
    break;
  case 3:
    valor_multa = (110.25 * 0.5) + 110.25;
    printf("Multa a ser paga em Marco R$%.2f\n", valor_multa);
    break;
  case 4:
    valor_multa = (171.03 * 0.5) + 171.03;
    printf("Multa a ser paga em Dezembro R$%.2f\n", valor_multa);
    break;
  default:
    printf("Erro! Encerrando Sistema em 2 segundos...\n");
  }

  system("PAUSE");
  return 0;
}