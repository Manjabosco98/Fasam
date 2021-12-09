/*A Loja Mamão com Açúcar está vendendo seus produtos em 5(cinco)
prestações sem juros. Faça um algoritmo que receba um valor de uma
compra e mostre o valor das prestações.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float valor_produto, prestacao;
 
 printf("\n\n");
 printf("Informe o valor do produto:R$");
 scanf("%f", &valor_produto);

 prestacao = valor_produto / 5;

 printf("O Valor das prestacoes do produto ficou em:R$%.2f", prestacao);
 printf("\n\n");

 system("PAUSE");
 return 0;
}