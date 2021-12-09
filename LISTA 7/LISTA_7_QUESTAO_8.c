/* Num frigorífico existem 90 bois. Cada boi traz em seu pescoço um cartão contendo
seu número de identificação e seu peso. Fazer um algoritmo que escreva o número
e o peso do boi mais gordo e do boi mais magro.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int numeroBoi, cont, contadora = 1, numeroGordo, numeroMagro;
  float pesoBoi, pesoBoiMaior, pesoBoiMenor;

  pesoBoiMaior = 0;
  pesoBoiMenor = 99999;

  for (cont = 1; cont <= 5; cont++)
  {
    printf("Digite a %dºnúmeração do boi:", contadora++);
    scanf("%d", &numeroBoi);
    printf("Digite o peso do boi:");
    scanf("%f", &pesoBoi);
    printf("\n");

    if (pesoBoi > pesoBoiMaior)
    {
      pesoBoiMaior = pesoBoi;
      numeroGordo = numeroBoi;
    }
    else if (pesoBoi < pesoBoiMenor)
    {
      pesoBoiMenor = pesoBoi;
      numeroMagro = numeroBoi;
    }
  }
  printf("Boi mais gordo(%d): %.2f\n", numeroGordo, pesoBoiMaior);
  printf("Boi mais magro(%d): %.2f\n", numeroMagro, pesoBoiMenor);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}
