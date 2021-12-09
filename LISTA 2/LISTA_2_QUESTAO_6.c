/*Faça um aplicativo que o usuário informe os valores dos catetos de um
triângulo retângulo e que ao final escreva a sua hipotenusa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float a, b, cateto;

 printf("informe um valor de A:");
 scanf("%f", &a);

 printf("Informe um valor de B:");
 scanf("%f", &b);
 
 cateto = pow(a, 2) + pow(b, 2); 

 printf("O Valor da Hipotenusa e:%.2f", cateto);
 printf("\n\n");

 system("PAUSE");
 return 0;
}