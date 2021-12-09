/* 2. Leia uma quantidade não determinada de números positivos. Calcule a quantidade
de números pares e ímpares, a média geral dos números lidos. O número que
encerrará a leitura será o número zero. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int num, par, impar, cont, soma, media;

  cont = 0;
  par = 0;
  impar = 0;
  soma = 0;

  while (num != 0)
  {
    printf("Digite %dºnúmero:", cont + 1);
    scanf("%d", &num);
    if (num > 0)
    {
      if (num % 2 == 0)
      {
        par++;
      }
      else
      {
        impar++;
      }
    }

    soma = soma + num;
    cont++;
    media = soma / cont;
  }
  printf("Quantos números foi digitados: %d \n", cont);
  printf("A soma dos números são %d \n", soma);
  printf("A média dos números é %d \n", media);
  printf("Quantidade de números pares %d \n", par);
  printf("Quantidade de números ímpares %d \n", impar);
  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}