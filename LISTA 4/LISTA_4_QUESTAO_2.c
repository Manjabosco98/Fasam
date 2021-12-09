/* 2. A partir do exercício anterior, pergunte ao usuário se deseja os
numerais em inglês ou português. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "pt-br");

  int num, idioma;

  printf("Informe um numero:");
  scanf("%d", &num);
  printf("\n");
  switch (num)
  {
  case 1:
    printf("Escolha um idioma 1-Portugues ou 2-Ingles ");
    scanf("%d", &idioma);
    if (idioma == 1)
    {
      printf("Um\n");
    }
    else
    {
      printf("One\n");
    }
    break;
  case 2:
    printf("Escolha um idioma 1-Portugues ou 2-Ingles ");
    scanf("%d", &idioma);
    if (idioma == 1)
    {
      printf("Dois\n");
    }
    else
    {
      printf("Two\n");
    }
    break;
  case 3:
    printf("Escolha um idioma 1-Portugues ou 2-Ingles ");
    scanf("%d", &idioma);
    if (idioma == 1)
    {
      printf("Tres\n");
    }
    else
    {
      printf("Three\n");
    }
    break;
  case 4:
    printf("Escolha um idioma 1-Portugues ou 2-Ingles ");
    scanf("%d", &idioma);
    if (idioma == 1)
    {
      printf("Quatro\n");
    }
    else
    {
      printf("For\n");
    }
    break;
  case 5:
    printf("Escolha um idioma 1-Portugues ou 2-Ingles ");
    scanf("%d", &idioma);
    if (idioma == 1)
    {
      printf("Cinco\n");
    }
    else
    {
      printf("Five\n");
    }
    break;
  default:
    printf("Opcao invalida!\n");
  }

  system("PAUSE");
  return 0;
}