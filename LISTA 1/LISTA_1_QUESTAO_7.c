/*Faça um algoritmo que receba um valor que foi depositado e exiba o valor
com rendimento após um mês. Considere fixo o juro da poupança em 0,70%
a. m.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
 
 float valor_depositado, rendimento;
 
 printf("\n\n");
 printf("Informe um valor a ser depositado:R$");
 scanf("%f", &valor_depositado);

 rendimento = (valor_depositado * 0.70) + valor_depositado;

 printf("O Valor depositado teve um rendimento ao mes de:R$%.2f\n\n", rendimento);

 system("PAUSE");
 return 0;
}