#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int divisor, numInicial, numFinal;
  char resp;
  bool flagRepetir = true, flagResp = true;

  while (flagRepetir)
  {

    printf("Digite o divisor:");
    scanf("%d", &divisor);

    printf("Digite um número inicial:");
    scanf("%d", &numInicial);

    printf("Digite um número final:");
    scanf("%d", &numFinal);

    while (numInicial <= numFinal)
    {
      if (numInicial % divisor == 0)
      {
        printf(" [%d] ", numInicial);
      }
      else
      {
        printf(" %d", numInicial);
      }
      numInicial++;
    }
    printf("\n");
    while (flagResp)
    {
      printf("Deseja Continuar?(s/n):");
      scanf(" %c", &resp);
      if (resp == 's' || resp == 'S')
      {
        flagResp = false;
      }
      else if (resp == 'n' || resp == 'N')
      {
        flagRepetir = false;
        flagResp = false;
        printf("Programa Finalizado! \n");
      }
      else
      {
        printf("ERRO! Coloque uma opção válida! \n");
      }
    }
    flagResp = true;
  }

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}