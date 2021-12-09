/* 4. Faça um programa que leia dois vetores, Vet1 e Vet2, cada um contendo 10 elementos do
tipo char. Seu programa deve determinar e imprimir a quantidade de elementos de mesma
posição são iguais nos dois vetores.
Por exemplo: se fossem fornecidos os dois vetores a seguir, o resultado do programa seria 2.
- Vet1=[ 'a' ,'x' , 'g', 'v']
- Vet2=[ 'a', 'p' , 'g', 'x'] */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int main()
{
  char vetor1[5], vetor2[5];
  int cont, cont1, cont2, i, res;

  res = 0;
  cont1 = 0;
  cont2 = 0;

  // Ler os caractere do primeiro vetor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d caractere do primeiro vetor:", cont1++);
    scanf(" %c", &vetor1[i]);
  }
  printf("\n");
  // Ler os caractere do segundo valor
  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d caractere do segundo vetor:", cont2++);
    scanf(" %c", &vetor2[i]);
  }
  printf("\n");
  // Mostrar os caractere do primeiro vetor
  for (i = 0; i < 5; i++)
  {
    printf("[%c] ", vetor1[i]);
  }
  printf("\n");
  // Mostrar os caractere do segundo valor
  for (i = 0; i < 5; i++)
  {
    printf("[%c] ", vetor2[i]);
  }
  printf("\n\n");

  for (cont = 0; cont < 5; cont++)
  {
    for (i = 0; i < 5; i++)
    {
      if (vetor1[cont] == vetor2[i])
      {
        res++;
      }
    }
  }

  printf("Quantidade de caracteres que repetem entre os dois vetores %d\n", res);

  return 0;
}
