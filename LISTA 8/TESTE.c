#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int vetor[10], i, totpar;
  int cont = 1;

  totpar = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Digite o %d valor:", cont++);
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 10; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      totpar = totpar + 1;
      printf("valor par na posicao %d \n", i);
    }
    else
    {
      printf("Nao foi informado nenhum numero par!\n");
    }
  }
  printf("Total de numeros pares %d \n", totpar);
  system("PAUSE");
  return 0;
}