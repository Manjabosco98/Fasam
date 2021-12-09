/* 10. Faça um programa que receba dois números e execute as operações
listadas a seguir de acordo com a escolha do usuário:
Escolha do Usuario | Operacao 
        1          | Media entre os numeros digitados
        2          | Diferença entre os numeros 
        3          | Produtos entre os numeros digitados
        4          | Divisao do primeiro pelo segundo.
Se a opção digitada for inválida, mostrar uma mensagem de erro e
terminar a execução do programa. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int num1, num2, media, diferenca, produto, div, op;

  printf("Informe o primeiro numero:");
  scanf("%d", &num1);

  printf("Informe o segundo numero:");
  scanf("%d", &num2);

  printf(" 1-Media entre os numeros digitados\n 2-Diferenca entre os numeros\n 3-Produtos entre os numeros digitados\n 4-Divisao do    primeiro pelo segundo");
  scanf("%d", &op);
  switch (op)
  {
  case 1:
    media = (num1 + num2) / 2;
    printf("Media dos dois numeros digitados e %d\n", media);
    break;
  case 2:
    diferenca = (num1 + num2);
    diferenca = diferenca - num2;
    printf("A Diferenca dos dois numero e %d\n", diferenca);
    break;
  case 3:
    produto = num1 * num2;
    printf("Produto dos dois numero digitados e %d\n", produto);
    break;
  case 4:
    div = num1 / num2;
    printf("Divisao dos dois numeros e %d\n", div);
    break;
  default:
    printf("Opcao digitada invalida,encerrando sistema...\n");
  }

  system("PAUSE");
  return 0;
}