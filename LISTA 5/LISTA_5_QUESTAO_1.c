/* 1. Determine a quantidade de homens e mulheres (separadamente) que são maiores de
idade, baseado numa lista de 20 pessoas. Considere apenas como entrada a
informação se é homem ou mulher ('m' ou 'f') e a idade. */

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

  int idade, cont, qtdh, qtdf;
  char sexo;

  cont = 0;
  qtdh = 0;
  qtdf = 0;

  while (cont < 5)
  {
    printf("Digite a idade da %dº pessoa:", cont + 1);
    scanf(" %d", &idade);

    printf("Digite o sexo da %dº pessoa:", cont + 1);
    scanf(" %c", &sexo);

    if (sexo == 'h')
    {
      qtdh++;
    }
    else if (sexo == 'f')
    {
      qtdf++;
    }
    cont++;
  }
  printf("Quantidade de homens maior de idade %d \n", qtdh);
  printf("Quantidade de mulheres maior de idade %d \n", qtdf);
  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}