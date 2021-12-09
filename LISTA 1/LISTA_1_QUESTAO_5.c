/*Ler dois valores inteiros para as variáveis A e B, e efetuar as trocas dos
valores de forma que a variável A passe a possuir o valor da variável B e a
variável B passe a possuir o valor da variável A. Apresentar os valores
trocados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguse");
 
 int a, b;
 
 printf("\n");
 printf("Informa um valor pra A:");
 scanf("%d", &a);
 printf("Informe um valor pra B:");
 scanf("%d", &b);
 printf("\n");

 a = a + b; // a = a * b;
 b = a - b; // b = a / b;
 a = a - b; // a = a / b;

 printf("Novo valor de A:%d\n", a);
 printf("Novo valor de B:%d\n", b);
 printf("\n\n");

 system("PAUSE");
 return 0;
}