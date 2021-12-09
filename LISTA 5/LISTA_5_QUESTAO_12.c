#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int numero_sorteado, numero, cont;

  printf("Adivinhe o múmero sorteado \n");
  printf("Digite um número:");
  scanf("%d", &numero);

  cont = 1;
  srand(time(NULL));

  while (cont == 1)
  {
    numero_sorteado = rand() % 100;

    while (numero != numero_sorteado)
    {
      if (numero_sorteado > numero)
      {
        printf("Errou! O numero eh maior que %d\n", numero);
        printf("Informe outro número:\n");
        scanf("%d", &numero);
      }
      else if (numero_sorteado < numero)
      {
        printf("Errou! O numero eh menor que %d \n", numero);
        printf("Informe outro número:\n");
        scanf("%d", &numero);
      }
      cont++;
    }
    printf("Parabéns você acertou\n");
    printf("%d\n ", numero_sorteado);
  }
  printf("Encerrando o programa...");

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}