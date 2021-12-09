/*Faça um algoritmo que receba dois números e ao final mostre a soma,
subtração, multiplicação e a divisão dos números lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 int num1, num2, soma;

 printf("\n");
 printf("Informe o primeiro numero:");
 scanf("%d", &num1);
 printf("\n");
 printf("Informe o segundo numero:");
 scanf("%d", &num2);
 printf("\n");

 soma = num1 + num2;

 printf("A Soma dos dois numeros informados sao:%d", soma);
 printf("\n\n");
 
 system("PAUSE");
 return 0;
}