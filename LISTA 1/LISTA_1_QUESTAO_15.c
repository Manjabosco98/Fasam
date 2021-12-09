/*Ler 80 números e ao final informar quantos número(s) estão no intervalo
entre 10 (inclusive) e 150(inclusive).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int num, contador;

  contador = 0;

  for (num == 10; num > 80; num++)
  {
    printf("Informe um numero:");
    scanf("%d", &num);
    if (num >= 10 && num <= 150)
    {
      contador++;
    }
  }

  printf("Foram digitados %d Numeros que estao no intervalos entre 10 a 150...", num);
  printf("\n");

  system("PAUSE");
  return 0;
}