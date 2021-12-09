/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus
Fahrenheit. A fórmula de conversão é: F=(9*C/5) + 32, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float c, f;

 printf("\n\n");
 printf("Informe uma temperatura em graus celsius:");
 scanf("%f", &c);
 printf("\n");

 f = (9 * c / 5) + 32;

 printf("A Temperatura em graus celsius:%.2f foi convertida para Fahrenheit:%.2f\n", c, f);
 printf("\n\n");

 system("PAUSE");
 return 0;
}