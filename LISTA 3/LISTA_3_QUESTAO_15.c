/* 15. Escrever um algoritmo que lê um valor em reais e calcula qual o menor número
possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser
decomposto. Escrever o valor lido e a relação de notas necessárias. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int dinheiro, notas100, notas50, notas10, notas5, notas1;

  printf("Digite um valor real R$");
  scanf("%d", &dinheiro);

  notas100 = dinheiro / 100;
  notas50 = (dinheiro % 100) / 50;
  notas10 = ((dinheiro % 100) % 50) / 10;
  notas5 = (((dinheiro % 100) % 50) % 10) / 5;
  notas1 = ((((dinheiro % 100) % 50) % 10) % 5) / 1;

  printf("%d nota(s) de R$100,00 \n", notas100);
  printf("%d nota(s) de R$50,00 \n", notas50);
  printf("%d nota(s) de R$10,00 \n", notas10);
  printf("%d nota(s) de R$5,00 \n", notas5);
  printf("%d nota(s) de R$1,00 \n", notas1);

  system("PAUSE");
  return 0;
}