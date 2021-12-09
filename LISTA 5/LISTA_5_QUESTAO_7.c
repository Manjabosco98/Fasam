#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  float notaA, notaB, media;
  char nome[30];
  int cont = 0;

  system("color 20");
  while (cont < 3)
  {
    printf("Digite o nome do aluno:");
    scanf(" %s", nome);
    printf("Digite a nota A:");
    scanf("%f", &notaA);
    printf("Digite a nota B:");
    scanf("%f", &notaB);

    media = ((notaA * 1) + (notaB * 2)) / 3;

    cont++;
    printf("Nome do aluno é %s \n", nome);
    printf("A Média do aluno é %.2f\n", media);
  }

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}