/*Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica
expressa em segundos e mostre-o expresso em horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int horas, minutos, segundos, duracao_fabrica;

  printf("\n\n");
  printf("Informe o tempo de duracao do evento da fabrica:");
  scanf("%d", &duracao_fabrica);

  horas = (duracao_fabrica / 3600);
  minutos = (duracao_fabrica % 3600) / 60;
  segundos = (duracao_fabrica % 60) % 60;

  printf("Duracao do evento da fabrica Horas:%d, minutos:%d e segundos:%d", horas, minutos, segundos);
  printf("\n\n");

  system("PAUSE");
  return 0;
}
