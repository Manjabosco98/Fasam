/*Faça um aplicativo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada):
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto è SB = HT * VH;
e) Calcule o total de desconto è TD = (PD/100) *SB;
f) Calcule o salário líquido è SL = SB – TD;
g) Para cada cálculo acima realizado incremente 1 em uma variável contadora CONT;
h) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto,
Salário Liquido, Contador.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float ht, vh, pd, sb, td, sl, cont;

 cont = 0;

 printf("\n\n");
 printf("Informe quantas horas foi trabalhado no mes:");
 scanf("%f", &ht);

 printf("Informe o valor de hora trabalhada:");
 scanf("%f", &vh);

 printf("Informe o percenteual de desconto:");
 scanf("%f", &pd);

 sb = ht * vh;
 cont = cont + 1;
 td = (pd / 100) * sb;
 cont = cont + 1;
 sl = sb - td;
 cont = cont + 1;

 printf("O Valor de horas trabalhadas:%.2f\n", vh);
 printf("O Salario Bruto:%.2f\n", sb);
 printf("Desconto:%.2f\n", td);
 printf("Salario Liquido:%.2f\n", sl);
 printf("Contador: %.2f\n", cont);

 system("PAUSE");
 return 0;
}


