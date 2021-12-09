/*Faça um algoritmo que receba um número e diga se este número está no
intervalo entre 100 e 200.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 int numero;

 printf("\n\n");
 printf("Informe um numero:");
 scanf("%d", &numero);
 printf("\n\n");

 if(numero >= 100 && numero <= 200){
  printf("O Numero informado pelo usuario esta no intervalo entre 100 e 200!\n");
  printf("Numero informado:%d", numero);
  printf("\n\n");
 }else{
  printf("O Numero informado pelo usuario esta fora do intervalo entre 100 e 200!\n");
  printf("Numero informado:%d", numero);
  printf("\n\n");
 }

 printf("\n\n");
 
 system("PAUSE");
 return 0;
}