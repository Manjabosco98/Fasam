/* 15. Escreva um algoritmo que leia um valor inteiro PROC e um vetor de 10 elementos
inteiros. Em seguida, seu programa deve verificar se o valor PROC pertence ou não ao vetor
lido. Caso o valor esteja no vetor, emita uma mensagem e a posição do elemento no vetor.
Caso o elemento não exista no vetor emita apenas a mensagem. */
#include <stdio.h>
#include <stdbool.h>

#define n 5
int main()
{
  int number_search, numbers[n];
  bool number_finder = false;
  printf("|> Digite o valor que sera procurado.\n");
  printf("|> ");
  scanf("%d", &number_search);
  printf("|> Digite o vetor.\n");
  for (int i = 0; i < n; i++)
  {
    printf("|> ");
    scanf("%d", &numbers[i]);
  }
  printf("| Resultado da pesquisa.\n");
  for (int i = 0; i < n; i++)
  {
    if (numbers[i] == number_search)
    {
      printf("| O numero %d foi encontrado no indice %d\n", number_search, i);
      number_finder = true;
    }
  }
  if (number_finder == false)
  {
    printf("| O numero informado nao pertence ao vetor.\n\n");
  }
  return 0;
}