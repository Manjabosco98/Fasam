/* Escreva um programa que leia o sexo, a idade e o peso de um grupo de 10 pessoas,
determine e imprima o peso médio dos homens e a idade média das mulheres do
grupo. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

    int cont = 0, n, idade, qtdHomen = 0, qtdMulher = 0;
  float peso, soma = 0, media = 0, idadeMedia = 0, somaMedia = 0;
  char sexo;
  printf("Digite o número de pessoas pertecentes:");
  scanf("%d", &n);

  for (cont = 1; cont <= n; cont++)
  {
    printf("Digite o sexo da Pessoa:");
    scanf(" %c", &sexo);
    printf("Digite a idade da Pessoa:");
    scanf("%d", &idade);
    printf("Digite o peso da Pessoa:");
    scanf("%f", &peso);
    if (sexo == 'M' || sexo == 'm')
    {
      soma = peso + soma;
      qtdHomen++;
    }
    else if (sexo == 'F' || sexo == 'f')
    {
      somaMedia = idade + somaMedia;
      qtdMulher++;
    }
    if (qtdHomen > 0)
    {
      media = soma / qtdHomen;
    }

    if (qtdMulher > 0)
    {
      idadeMedia = somaMedia / qtdMulher;
    }
  }
  printf("Quantidade de homens %d\nquantidade de mulheres %d\n", qtdHomen, qtdMulher);
  printf("Peso médio do grupo é %.2f\n", media);
  printf("Idade média do grupo é %.2f\n", idadeMedia);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}