/*Elabore um aplicativo que leia o tamanho do lado de um quadrado e informe
a área e o perímetro do quadrado. (Perímetro = 4 * L; área = L ^ 2).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float lado, perimetro;

 printf("Informe um valor para o lado do quadrado:");
 scanf("%f", &lado);

 perimetro = 4 * pow(lado, 2);

 printf("O Perimetro do quadrado:%.2f", perimetro);
 printf("\n\n");

 system("PAUSE");
 return 0;
}