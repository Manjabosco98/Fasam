/* 3. Seja N um número quadrado perfeito. Se somarmos os números ímpares
consecutivos (1+3+5+7+9+...) até que esta soma seja igual a N, o número M de termos somados será igual a raiz quadrada de N.
Exemplo: N = 16, 16 = 1 + 3 + 5 + 7, M = 4 termos. Logo, a raiz quadrada de 16 é 4. */

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

  int n, cont = 0, b = 0, soma = 0, i = 0;
  float raiz;

  do
  {
    printf("Informe um número inteiro e positivo: ");
    scanf("%d", &n);

    while (soma < n)
    {
      if (cont % 2 != 0)
      {
        soma = cont + soma;
        i++;
      }

      cont++;
    }

    raiz = sqrt(n);

    if (raiz == i)
    {
      printf("Este número é quadrado perfeito, tem raiz %.0f\n.", raiz);
    }
    else
    {
      printf("Este número não é um quadrado perfeito. \n");
    }

    i = 0;
    cont = 0;
    soma = 0;

  } while (n != -1);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}
