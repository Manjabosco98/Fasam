#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  float notaA, notaB, media;
  char nome[40], resp;
  bool flagRepetir = true, flagResp = true;

  while (flagRepetir)
  {
    printf("Digite o nome do aluno:");
    scanf(" %s", nome);

    printf("Digite a nota A:");
    scanf("%f", &notaA);

    printf("Digite a nota B:");
    scanf("%f", &notaB);

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
  flagRepetir = true;

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}