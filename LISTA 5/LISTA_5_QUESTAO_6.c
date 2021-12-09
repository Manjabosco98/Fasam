#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int i, num, fat;
  char resp;

  fat = 1;
  i = 1;
  while (resp != 'n' && resp != 'N')
  {
    printf("Digite um número:");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
      fat = i * fat;
      i++;
    }

    printf("O Fatorial de %d é %d \n", num, fat);
    printf("Deseja  Continuar? (s/n):");
    scanf(" %c", &resp);
    printf("\n");
    fat = 1;
  }

  printf("Que pena! até mais!\n");

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}