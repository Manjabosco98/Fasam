#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main()
{
  /*UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);*/

  int num = 1, i = 1, cont = 0;

  system("color 1F");
  while (num <= 150)
  {
    i = 1;
    cont = 0;
    while (num >= 1)
    {
      if (num % i == 0)
      {
        cont++;
      }
      i++;
    }
    if (cont == 2)
    {
      printf("Números primos %d ", num);
    }
    num++;
  }

  // SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}
