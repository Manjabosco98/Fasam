/*Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos,
para os quais fornece a quantidade de ração em gramas. A quantidade diária
de ração fornecida para cada é sempre a mesma. Faça um algoritmo que
receba o peso do saco de ração e a quantidade de ração fornecida para cada
gato, calcule e mostre quanto restará de ração ao final de cinco dias.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float peso_kg, peso_grama, sobra, racao;

 printf("Informe o peso kg da racao:");
 scanf("%f", &peso_kg);

 peso_grama = peso_kg * 1000;

 printf("Informe o peso em gramas que cada gato come:");
 scanf("%f", &racao);
 
 sobra = peso_grama - (racao * 10);
 
 if(sobra > 0){
  printf("Restara %.2fg de racao ao final de 5 dias\n", sobra);
 }else{
  if(sobra < 0){
   printf("Faltara %.2fg de racao para os 5 dias\n", sobra);
  }else{
   printf("O Numero de racao e exato para 5 dias\n");
  }
 }

 system("PAUSE");
 return 0;
}