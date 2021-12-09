#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
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
  bool flagRepetir = true, flagNotaA = true, flagNotaB = true, flagResp = true;

  system("color 1F");
  while (flagRepetir)
  {
    printf("Digite o nome do aluno:");
    scanf(" %s", nome);

    while (flagNotaA)
    {
      printf("Digite a nota A:");
      scanf("%f", &notaA);
      if (notaA >= 0 && notaA <= 10)
      {
        flagNotaA = false;
      }
      else
      {
        printf("ERRO: nota invalida! Digite Novamente a nota. \n");
      }
    }
    flagNotaA = true;

    while (flagNotaB)
    {
      printf("Digite a nota B:");
      scanf("%f", &notaB);
      if (notaB >= 0 && notaB <= 10)
      {
        flagNotaB = false;
      }
      else
      {
        printf("ERRO: nota invalida! Digite Novamente a nota. \n");
      }
    }
    flagNotaB = true;

    media = ((notaA * 1) + (notaB * 2)) / 3;

    printf("Nome do aluno %s\n", nome);
    printf("A Média do aluno é %.2f\n", media);

    while (flagResp)
    {
      printf("Deseja Continuar?(s/n):");
      scanf(" %c", &resp);
      if (resp == 's' || resp == 'S')
      {
        flagResp = false;
      }
      else if (resp == 'n' || resp == 'N')
      {
        flagRepetir = false;
        flagResp = false;
        printf("Programa Finalizado! \n");
      }
      else
      {
        printf("ERRO! Coloque uma opção válida! \n");
      }
    }
    flagResp = true;
  }

  SetConsoleOutputCP(CPAGE_DEFAULT);
  getch();
  return 0;
}