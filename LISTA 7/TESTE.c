#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int cont;

  for (cont = 100; cont <= 200; cont++)
  {
    if (cont % 2 == 0)
    {
      printf("Números pares %d \n", cont);
    }
  }

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}