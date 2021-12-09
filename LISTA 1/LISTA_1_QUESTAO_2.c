/*Escreva um algoritmo para determinar o consumo médio de um automóvel
sendo fornecida a distância total percorrida pelo automóvel e o total de
combustível gasto.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 double dist_perc, total_conb, cons;
 
 printf("\n\n");
 printf("Informe a distancia percorrida:");
 scanf("%lf", &dist_perc);
 
 printf("Informe o total de conbustivel:");
 scanf("%lf", &total_conb);
 printf("\n");

 cons = dist_perc / total_conb;

 printf("O Consumo medio foi de:%.2lf", cons);
 printf("\n\n");

 system("PAUSE");
 return 0;
}