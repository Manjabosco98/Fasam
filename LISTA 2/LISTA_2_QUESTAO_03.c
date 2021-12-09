/*Faça um algoritmo que leia a idade de uma pessoa expressa em dias e
mostre-a expressa em anos, meses e dias.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int ano, mes, dia, dias;

  printf("\n\n");
  printf("Informe a idade expressa em dias:");
  scanf("%d", &dias);

  ano = (dias / 365);
  mes = (dias % 365) / 30;
  dia = (dias % 365) % 30;

  printf("A Idade em ano:%d, meses:%d e dias:%d", ano, mes, dia);
  printf("\n");
  printf("\n\n");

  system("PAUSE");
  return 0;
}