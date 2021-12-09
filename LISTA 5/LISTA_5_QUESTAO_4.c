/* 4. Leia uma data e uma quantidade de dias, em seguida exiba esta data somada pela
quantidade de dias fornecida. Exemplo: 29/04/2007 + 3 = 02/05/2007. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int dia, mes = 0, ano, qntdia, cont = 0, diacontrol, mescontrol, anocontrol;

  printf("Digite o dia:");
  scanf("%d", &dia);
  printf("Digite o mês:");
  scanf("%d", &mes);
  printf("Digite o ano:");
  scanf("%d", &ano);
  printf("Digite a quantidade de dias:");
  scanf("%d", &qntdia);

  diacontrol = dia;
  mescontrol = mes;
  anocontrol = ano;

  while (cont < qntdia)
  {
    // printf("\n%d/%d/%d", dia, mes, ano);
    if (mescontrol == 2 && anocontrol % 4 != 0)
    {
      if (diacontrol == 28)
      {
        mescontrol++;
        diacontrol = 0;
      }
      else
      {
        diacontrol++;
      }
    }
    else if (mescontrol == 2 && anocontrol % 4 == 0)
    {
      if (diacontrol == 29)
      {
        mescontrol++;
        diacontrol = 0;
      }
      else
      {
        diacontrol++;
      }
    }
    if (mescontrol == 4 || mescontrol == 6 || mescontrol == 9 || mescontrol == 11)
    {
      if (diacontrol == 30)
      {
        mescontrol++;
        diacontrol = 0;
      }
      else
      {
        diacontrol++;
      }
    }
    if (mescontrol == 1 || mescontrol == 3 || mescontrol == 5 || mescontrol == 7 || mescontrol == 8 || mescontrol == 10 || mescontrol == 12)
    {
      if (mescontrol == 12 && diacontrol == 31)
      {
        anocontrol++;
        mescontrol = 1;
        diacontrol = 0;
      }
      if (diacontrol == 31)
      {
        mescontrol++;
        diacontrol = 1;
      }
      else
      {
        diacontrol++;
      }
    }
    cont++;
  }
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12 /*COR*/);
  printf("\n%d/%d/%d  +  %d = %d/%d/%d \n", dia, mes, ano, qntdia, diacontrol, mescontrol, anocontrol);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}