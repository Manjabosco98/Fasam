/* 1. Faça um programa que leia números digitados pelo usuário até ele digitar -1
(utilizando um laço “do while”). No final, calcule a média dos números fornecidos */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int num, soma = 0, media, cont;
  cont = 0;

  do
  {
    printf("Digite um número:");
    scanf("%d", &num);

    if (num == -1)
    {
      printf("Encerrando Sistema!\n");
    }
    else
    {
      soma = num + soma;
      cont++;
    }

  } while (num != -1);

  media = soma / cont;
  printf("Quantidade de números fornecidos %d\n", cont);
  printf("Média dos números fornecidos %d", media);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}