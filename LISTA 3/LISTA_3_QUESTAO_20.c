/* 20. Um comerciante calcula o valor da venda, tendo em vista a tabela a seguir:
Valor da Compra              | Valor da Venda
Valor < R$ 10,00             | Lucro de 70%
R$ 10,00 ≤ Valor < R$ 30,00  | Lucro de 50%
R$ 30,00 ≤ Valor < R$ 50,00  | Lucro de 40%
Valor ≥ R$ 50,00             | Lucro de 30%
Criar um algoritmo que leia o valor da compra e imprima o valor da venda. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float valor_compra, lucro;

  printf("Informe o valor da venda:");
  scanf("%f", &valor_compra);

  if (valor_compra < 10.00)
  {
    printf("---> abaixo de R$10,00 <--- \n");
    lucro = (valor_compra * 0.70) + valor_compra;
    printf("Valor da venda R$%.2f \n", lucro);
  }
  else if (valor_compra >= 10.00 && valor_compra < 30.00)
  {
    printf("---> R$ 10,00 ≤ Valor < R$ 30,00 <--- \n");
    lucro = (valor_compra * 0.50) + valor_compra;
    printf("Valor da venda R$%.2f \n", lucro);
  }
  else if (valor_compra >= 30.00 && valor_compra < 50.00)
  {
    printf("---> R$ 30,00 ≤ Valor < R$ 50,00 <--- \n");
    lucro = (valor_compra * 0.40) + valor_compra;
    printf("Valor da venda R$%.2f \n", lucro);
  }
  else
  {
    printf("---> Acima de R$50,00 <--- \n");
    lucro = (valor_compra * 0.30) + valor_compra;
    printf("Valor da venda R$%.2f \n", lucro);
  }

  system("PAUSE");
  return 0;
}