/* 7. Leia o código de um determinado produto e mostre sua classificação.
Utilize a seguinte tabela como referência:
      Codigo          |  Classificacao
         1            |  Alimento nao-perecivel
     2,3 ou 4         |  Alimento Perecivel
      5 ou 6          |  Vestuario
         7            |  Higiene Pessoal
     8 ate 15         |  Limpeza e utensilios Domesticos
Qualquer outro codigo |  Codigo Invalido */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCp();
  SetConsoleOutputCP(CPAGE_UTF8);*/
  int cod;

  printf("Informe o codígo do produto:");
  scanf("%d", &cod);

  switch (cod)
  {
  case 1:
    printf("Alimento Nao-Perecível!\n");
    break;
  case 2:
  case 3:
  case 4:
    printf("Alimento Perecivel!\n");
    break;
  case 5:
  case 6:
    printf("Vestuario!\n");
    break;
  case 7:
    printf("Higiene Pessoal!\n");
    break;
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
    printf("Limpeza e utensilios Domesticos!\n");
    break;
  case 16:
    printf("Codigo invalido!\n");
  }

  //SetConsoleOutputCP(CPAGE_DEFAULT);
  system("PAUSE");
  return 0;
}