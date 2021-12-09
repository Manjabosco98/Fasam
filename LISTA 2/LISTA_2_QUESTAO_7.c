/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar
suas vendas oferecendo desconto. Faça um aplicativo que possa receber um
valor de um produto e que escreva o novo valor tendo em vista que o
desconto foi de 9%.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float produto, desconto;

 printf("Informe o valor do produto:");
 scanf("%f", &produto);

 desconto = produto - (produto * 0.09);

 printf("Produto com o desconto:%.2f", desconto);
 printf("\n");

 system("PAUSE");
 return 0;
}