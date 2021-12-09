/* 3. Exiba todas as datas de um calendário que estão entre duas datas informadas pelo
usuário (dia, mês e ano). Suponha que as duas datas informadas sejam válidas. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int diaInicial, mesInicial, anoInicial, diaFinal, mesFinal, anoFinal, diaControl, mesControl, anoControl;

  printf("Digite o dia inicial:");
  scanf("%d", &diaInicial);
  printf("Digite o mês inicial:");
  scanf("%d", &mesInicial);
  printf("Digite o ano inicial:");
  scanf("%d", &anoInicial);

  printf("Digite o dia final:");
  scanf("%d", &diaFinal);
  printf("Digite o mês final:");
  scanf("%d", &mesFinal);
  printf("Digite o ano final:");
  scanf("%d", &anoFinal);

  diaControl = diaInicial;
  mesControl = mesInicial;
  anoControl = anoInicial;

  while (diaControl != diaFinal || mesControl != mesFinal || anoControl != anoFinal)
  {
    printf("\n%d/%d/%d", diaControl, mesControl, anoControl);
    if (mesControl == 2 && anoControl % 4 != 0)
    {
      if (diaControl == 28)
      {
        mesControl++;
        diaControl = 0;
      }
      else
      {
        diaControl++;
      }
    }
    else if (mesControl == 2 && anoControl % 4 == 0)
    {
      if (diaControl == 29)
      {
        mesControl++;
        diaControl = 0;
      }
      else
      {
        diaControl++;
      }
    }
    if (mesControl == 4 || mesControl == 6 || mesControl == 9 || mesControl == 11)
    {
      if (diaControl == 30)
      {
        mesControl++;
        diaControl = 0;
      }
      else
      {
        diaControl++;
      }
    }
    if (mesControl == 1 || mesControl == 3 || mesControl == 5 || mesControl == 7 || mesControl == 8 || mesControl == 10 || mesControl == 12)
    {
      if (mesControl == 12 && diaControl == 31)
      {
        anoControl++;
        mesControl = 1;
        diaControl = 0;
      }
      if (diaControl == 31)
      {
        mesControl++;
        diaControl = 1;
      }
      else
      {
        diaControl++;
      }
    }
  }
  printf("\n%d/%d/%d", diaControl, mesControl, anoControl);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}