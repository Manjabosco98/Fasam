/* 19. Escreva um algoritmo que dada a idade de uma pessoa, determine sua
classificação segundo a seguinte tabela:
- maior de idade;
- menor de idade;
- pessoa idosa (idade superior ou igual a 65 anos).
Em seguida informe a sua classe eleitoral:
- não eleitor (abaixo de 16 anos);
- eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive). */

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int idade;

  printf("Digite sua idade:");
  scanf("%d", &idade);

  if (idade >= 18 && idade <= 65)
  {
    printf("Maior de Idade! \n");
  }
  else if (idade < 18)
  {
    printf("Menor de Idade! \n");
  }
  else
  {
    printf("Pessoa Idade! \n");
  }

  if (idade < 16)
  {
    printf("Nao eleitor! \n");
  }
  else if (idade >= 18 && idade <= 65)
  {
    printf("Eleitor Obrigatorio! \n");
  }
  else
  {
    printf("Eleitor Facultativo! \n");
  }

  system("PAUSE");
  return 0;
}