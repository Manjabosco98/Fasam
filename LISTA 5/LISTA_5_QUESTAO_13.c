#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int num, numComp, cont = 0, inferior = 0, superior = 0;

  system("color 6E");
  printf("Digite um número:");
  scanf("%d", &num);

  srand(time(NULL));

  numComp = rand() % 100;

  while (numComp != num)
  {
    if (numComp > num)
    {
      printf("Maior! \n");
      if (numComp < superior)
      {
        superior = numComp;
      }
    }
    else
    {
      printf("Menor! \n");
      if (numComp > inferior)
      {
        inferior = numComp;
      }
    }
    numComp = rand() % 100;
    cont++;
  }

  printf("Acertou (%d)! \n", cont);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}