/* 2. Fazer uma urna eletrônica usando o comando “do while” para eleição presidencial
de segundo turno dos candidatos à presidência da república. Permita que o usuário
selecione o número do candidato (1- candidato1, 2- candidato2, 3-nulo e 4-
encerrar). Compute os votos e ao final informe qual candidato venceu. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int candidato1 = 0, candidato2 = 0, candidato3 = 0, votos = 0, nulo = 0, cont;
  SetConsoleTitle("Eleição");
  do
  {

    printf("Vote 1-Candidato1 , 2-Candidato2, 3-Candidato3 ou 4-Nulo!: ");
    scanf("%d", &votos);

    if (votos == 1)
    {
      candidato1 = candidato1 + 1;
    }
    else if (votos == 2)
    {
      candidato2 = candidato2 + 1;
    }
    else if (votos == 3)
    {
      candidato3 = candidato3 + 1;
    }
    else if (votos == 4)
    {
      printf("Você votou NULO! \n");
      nulo = nulo + 1;
    }

  } while (votos != 0);

  if (candidato1 > candidato2 && candidato1 > candidato3)
  {
    printf(" Candidato 1 foi o vencedor com %d votos! \n", candidato1);
    printf(" Candidato1 = %d votos\n Candidato2 = %d votos\n Candidato3 = %d votos\n ", candidato1, candidato2, candidato3);
  }
  else if (candidato2 > candidato1 && candidato2 > candidato3)
  {
    printf(" Candidato 2 foi o vencedor com %d votos! \n", candidato2);
    printf(" Candidato1 = %d votos\n Candidato2 = %d votos\n Candidato3 = %d votos\n ", candidato1, candidato2, candidato3);
  }
  else if (candidato3 > candidato1 && candidato3 > candidato2)
  {
    printf(" Candidato 3 foi o vencedor com %d votos! \n", candidato3);
    printf(" Candidato1 = %d votos\n Candidato2 = %d votos\n Candidato3 = %d votos\n ", candidato1, candidato2, candidato3);
  }
  printf("Quantidades de votos nulos %d\n", nulo);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}