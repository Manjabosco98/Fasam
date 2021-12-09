/* 16. A prefeitura de Goiânia abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do
salário bruto. Fazer um algoritmo que permita entrar com o salário bruto e o
valor da prestação, e informar se o empréstimo pode ou não ser concedido. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float salario, valor_prestacao;

  printf("\n");
  printf("Informe o salario do funcionario:");
  scanf("%f", &salario);

  printf("Informe o valor que deseja pagar pelas prestaçoes do emprestimo:");
  scanf("%f", &valor_prestacao);

  if (salario * 0.3 > valor_prestacao)
  {
    printf("Emprestimo aprovado!\n");
    printf("Valor das prestacoes R$%.2f \n", valor_prestacao);
  }
  else
  {
    printf("Infelizmente seu emprestimo nao foi aprovado! sentimos muito \n");
  }

  system("PAUSE");
  return 0;
}