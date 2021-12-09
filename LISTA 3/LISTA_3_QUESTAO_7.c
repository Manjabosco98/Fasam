/* 7. Um banco concederá um crédito especial aos seus clientes, variável com o
saldo médio no último ano. Faça um algoritmo que leia o saldo médio de um
cliente e calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma
mensagem informando o saldo médio e o valor do crédito

Saldo médio  | Percentual
de 0 a 200   | nenhum crédito
de 201 a 400 | 20% do valor do saldo médio
de 401 a 600 | 30% do valor do saldo médio
acima de 600 | 40% do valor do saldo médio */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float saldo_medio, credito;

  credito = 0;

  //ENTRADA
  printf("Informe o saldo bancario do cliente:R$");
  scanf("%f", &saldo_medio);

  //PROCESSAMENTO
  if (saldo_medio >= 0 && saldo_medio <= 200)
  {
    printf("Cliente nao tem saldo suficiente para ter limite de credito!\n");
  }
  else if (saldo_medio >= 201 && saldo_medio <= 400)
  {
    credito = saldo_medio * 0.2;
  }
  else if (saldo_medio >= 401 && saldo_medio <= 600)
  {
    credito = saldo_medio * 0.3;
  }
  else if (saldo_medio > 600)
  {
    credito = saldo_medio * 0.4;
  }
  else
  {
    printf("Saldo informado e negativo! \n");
  }
  printf("\n");

  //SAÌDA
  printf("Saldo Disponivel R$%.2f \n", saldo_medio);
  printf("Credito R$%.2f \n", credito);

  system("PAUSE");
  return 0;
}