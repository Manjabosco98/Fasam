/*Faça um algoritmo que receba o preço de custo de um produto e mostre o
valor de venda. Sabe-se que o preço de custo receberá um acréscimo de
acordo com um percentual informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float custo, venda, percentual, valor_venda;

 printf("\n\n");
 printf("Informe o valor do custo:R$");
 scanf("%f", &custo);
 printf("Informe o percentual:");
 scanf("%f", &percentual);

 venda = percentual / 100;
 valor_venda = (venda * custo) + custo;

 printf("Valor de custo:R$%.2f\n", custo);
 printf("O Valor de vendo do produto:R$%.2f", valor_venda);
 printf("\n\n");
 
 system("PAUSE");
 return 0;
}