/* 6. Agora faça um programa que leia dois vetores com N (N<=20) valores inteiros cada um. Seu
programa deve determinar e imprimir quantas vezes cada elemento do primeiro vetor
aparece no segundo vetor. Para o exemplo do exercício anterior o resultado seria:
- O valor 5 aparece 3 vezes no segundo vetor
- O valor 10 aparece 1 vez no segundo vetor
- O valor 21 aparece 2 vezes no segundo vetor
- O valor 3 aparece 0 vezes no segundo vetor
- O valor -1 aparece 0 vezes no segundo vetor
- O valor 4 aparece 0 vezes no segundo vetor */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int main()
{
  int vetor1[5], vetor2[5], i, cont1, cont2, i0, i1, i2, i3, i4;

  cont1 = 0;
  cont2 = 0;
  i0 = 0;
  i1 = 0;
  i2 = 0;
  i3 = 0;
  i4 = 0;

  // Ler os valores do primeiro vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Valor:", cont1++);
    scanf("%d", &vetor1[i]);
  }
  printf("\n");
  // Ler os valores do segundo vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d Valor:", cont2++);
    scanf("%d", &vetor2[i]);
  }
  printf("\n");
  // Mostrar os valores do primeiro vetor
  printf("Vetor 1:");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor1[i]);
  }
  printf("\n");
  // Mostrar os valores do segundo vetor
  printf("Vetor 2:");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] ", vetor2[i]);
  }
  printf("\n");

  for (i = 0; i < 5; i++)
  {
    if (vetor1[0] == vetor2[i])
    {
      i0++;
    }
    else if (vetor1[1] == vetor2[i])
    {
      i1++;
    }
    else if (vetor1[2] == vetor2[i])
    {
      i2++;
    }
    else if (vetor1[3] == vetor2[i])
    {
      i3++;
    }
    else if (vetor1[4] == vetor2[i])
    {
      i4++;
    }
  }
  printf("\n");
  printf("O valor %d aparece [%d] vezes no segundo vetor\n", vetor1[0], i0);
  printf("O valor %d aparece [%d] vezes no segundo vetor\n", vetor1[1], i1);
  printf("O valor %d aparece [%d] vezes no segundo vetor\n", vetor1[2], i2);
  printf("O valor %d aparece [%d] vezes no segundo vetor\n", vetor1[3], i3);
  printf("O valor %d aparece [%d] vezes no segundo vetor\n", vetor1[4], i4);

  return 0;
}