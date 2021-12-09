/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses
e dias e mostre-a expressa apenas em dias.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int anos, meses, dias, total_dias;

  printf("\n\n");
  printf("Informe a idade em anos:");
  scanf("%d", &anos);

  printf("Informe a idade em meses:");
  scanf("%d", &meses);

  printf("Informe a idade em dias:");
  scanf("%d", &dias);

  total_dias = ((anos * 365) + (meses * 30) + dias);

  /*f ((anos % 4 == 0) && (anos % 100 != 0) || (anos % 400 == 0))
  {
    printf("Ano Informado e bissexto!\n");
    total_dias = ((anos * 366) + (meses * 31) + dias);
  }
  else
  {
    total_dias = ((anos * 365) + (meses * 30) + dias);
  }*/

  printf("Idade expressa em dias sao:%d", total_dias);
  printf("\n\n");

  system("PAUSE");
  return 0;
}