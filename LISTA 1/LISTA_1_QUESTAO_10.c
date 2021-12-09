/*Faça um algoritmo que receba um número e mostre uma mensagem caso
este número seja maior que 10.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 int numero;

 printf("\n");
 printf("Informe um numero:");
 scanf("%d", &numero);

 if(numero <= 10){
  printf("Numero informado pelo usuario menor que 10!");
  printf("\n");
 }else{
  printf("Numero informado pelo usuario maior que 10!\n");
  printf("\n");
 }

 printf("\n\n");

 system("PAUSE");
 return 0;
}