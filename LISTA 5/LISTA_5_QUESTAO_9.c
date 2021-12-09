#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  float notaA, notaB, media;
  char nome[40], resp;
  bool flagnotaA = true, flagnotaB = true, flagrepetir = true, flagresposta = true;

  while (flagrepetir)
  {
    printf("Digite o nome do aluno:");
    scanf(" %s", nome);

    while (flagnotaA)
    {
      printf("Digite a nota A:");
      scanf("%f", &notaA);
      if (notaA >= 0 && notaA <= 10)
      {
        flagnotaA = false;
      }
      else
      {
        printf("ERRO: nota invalida! Digite Novamente a nota. \n");
      }
    }
    while (flagnotaB)
    {
      printf("Digite a nota B:");
      scanf("%f", &notaB);
      if (notaB >= 0 && notaB <= 10)
      {
        flagnotaB = false;
      }
      else
      {
        printf("ERRO: nota invalida! Digite Novamente a nota. \n");
      }
    }
    printf("\n\n");

    flagnotaA = true;
    flagnotaB = true;
    media = ((notaA * 1) + (notaB * 2)) / 3;

    printf("Nome do aluno %s\n", nome);
    printf("A Média do aluno é %.2f\n", media);
    printf("\n\n");
    flagresposta = true;
    while (flagresposta)
    {
      printf("Você quer continuar (S / N)? ");
      scanf(" %c", &resp);
      if (resp == 's' || resp == 'S')
      {
        flagresposta = false;
      }
      else if (resp == 'n' || resp == 'N')
      {
        flagrepetir = false;
        flagresposta = false;
        printf("Programa Finalizado! \n");
      }
      else
      {
        printf("ERRO! Coloque uma opão válida! \n");
      }
    }
  }

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}