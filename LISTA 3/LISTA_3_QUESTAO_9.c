/* 9. Faça um programa para validar uma senha (numérica) cadastrada pelo usuário.
Para isso, permita que o usuário cadastre uma senha (fazendo a leitura dela) e
depois peça para ele confirmar. Caso a senha esteja em conformidade com a
primeira mostre uma mensagem “Senha cadastrada!” caso contrário “Senha não
confere com a primeira senha digitada! Encerrando sistema...!”. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>>

int main()
{

  char senha1[5], senha2[5];

  printf("Digite sua senha:");
  scanf("%s", senha1);

  printf("Digite novamente a senha:");
  scanf("%s", senha2);

  if (strcmp(senha1, senha2) == 0)
  {
    printf("Senha cadastrada com sucesso...\n");
    printf("Digite sua senha:");
    scanf("%s", senha1);
    if (strcmp(senha1, senha2) == 0)
    {
      printf("Senha correta!\n");
    }
    else
    {
      printf("Senha Incorreta!\n");
    }
  }
  else
  {
    printf("Senha nao confere com a primeira senha digitada! Encerrando Sistema");
  }
  printf("\n\n");
  system("PAUSE");
  return 0;
}
