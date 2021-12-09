/* 24. Criar um algoritmo que leia o destino do passageiro, se a viagem inclui retorno
(ida e volta) e informar o preço da passagem conforme a tabela a seguir:
____________________________________________________
Condição             |  Ida          |  Ida e Volta |
Região Norte         |  R$ 500,00    |  R$ 900,00   |
Região Nordeste      |  R$ 350,00    |  R$ 650,00   |
Região Centro-Oeste  |  R$ 350,00    |  R$ 600,00   |
Região Sul           |  R$ 300,00    |  R$ 550,00   | */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int destino, idaVolta;

  printf("\n\n");
  printf("Informe o destino da viagem --> 1-Regiao norte 2-Nordeste 3-Centro-Oeste 4-Sul: ");
  scanf("%d", &destino);

  if (destino == 1)
  {
    printf("---> Regiao Norte <---\n");
    printf("Informe qual o tipo da passagem --> 5-Ida ou 6-Ida e Volta: ");
    scanf("%d", &idaVolta);
    if (idaVolta == 5)
    {
      printf("Passagem de Ida ta R$500,00 \n");
    }
    else if (idaVolta == 6)
    {
      printf("Passafem de Ida e Volta ta R$900,00 \n");
    }
  }
  else if (destino == 2)
  {
    printf("---> Regiao Nordeste <---\n");
    printf("Informe qual o tipo da passagem --> 7-Ida ou 8-Ida e Volta: ");
    scanf("%d", &idaVolta);
    if (idaVolta == 7)
    {
      printf("Passagem de Ida ta R$350,00 \n");
    }
    else if (idaVolta == 8)
    {
      printf("Passagem de Ida e Volta ta R$650,00 \n");
    }
  }
  else if (destino == 3)
  {
    printf("---> Regiao Centro-Oeste <---\n");
    printf("Informe qual o tipo da passagem --> 9-Ida ou 10-Ida e Volta: ");
    scanf("%d", &idaVolta);
    if (idaVolta == 9)
    {
      printf("Passagem de Ida ta R$350,00 \n");
    }
    else if (idaVolta == 10)
    {
      printf("Passagem de Ida e Volta ta R$600,00 \n");
    }
  }
  else if (destino == 4)
  {
    printf("---> Regiao Sul <---\n");
    printf("Informe qual o tipo da passagem --> 11-Ida ou 12-Ida e Volta: ");
    scanf("%d", &idaVolta);
    if (idaVolta == 11)
    {
      printf("Passagem de Ida ta R$300,00 \n");
    }
    else if (idaVolta == 12)
    {
      printf("Passagem de Ida e Volta ta R$550,00 \n");
    }
  }
  printf("\n\n");
  system("PAUSE");
  return 0;
}