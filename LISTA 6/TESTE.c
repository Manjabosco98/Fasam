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

  int senha1, senha2;

  do
  {
    printf("Digite uma senha:");
    scanf("%d", &senha1);

    printf("Digite a confirmacao da senha:");
    scanf("%d", &senha2);

  } while (senha1 != senha2);
  printf("Senha cadastrada com sucesso!!!\n");

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}