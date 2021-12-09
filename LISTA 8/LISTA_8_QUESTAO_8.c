/* 8. Escreva um programa que leia uma nota de cada um dos 10 alunos de uma turma,
armazene-as em um vetor, calcule e imprima a média aritmética geral desta classe e
imprima a quantidade de alunos que tiveram nota inferior à média calculada. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

  float nota1[10], media, soma;
  int i, cont;

  cont = 0;
  soma = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Digite a %d nota da n1:", cont + 1);
    scanf("%f", &nota1[i]);
    soma = soma + nota1[i];
  }
  printf("\n");
  media = soma / 10;
  for (i = 0; i < 10; i++)
  {
    if (nota1[i] > media)
    {
      printf("maior que a media %.2f\n ", nota1[i]);
    }
    else if (nota1[i] < media)
    {
      printf("menor que a media %.2f\n ", nota1[i]);
    }
  }
  return 0;
}