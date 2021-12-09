/*Faça um aplicativo que receba o custo de um espetáculo teatral e o preço do
convite esse espetáculo. Esse programa deve calcular e mostrar:
• A quantidade de convites que devem ser vendidos para que pelo menos o
custo do espetáculo seja alcançado.
• A quantidade de convites que devem ser vendidos para que se tenha um
lucro de 23%.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 float custo_espetaculo, preco_convite,quant_vendidos, quant_vendidos_lucro, quant_espetaculo_convite;
 
 printf("\n\n");
 printf("Informe o custo que o espetaculo teve:");
 scanf("%f", &custo_espetaculo);

 printf("Informe o preco do convite do espetaculo:");
 scanf("%f", &preco_convite);

 quant_vendidos = custo_espetaculo / preco_convite;
 quant_vendidos_lucro = (custo_espetaculo * 1.23) / preco_convite;

 printf("Quantidade de convites vendidos:%.0f\n", quant_vendidos);
 printf("Convites que deve ser vendido para que possa ter lucro %.0f convites\n", quant_vendidos_lucro);
 printf("\n\n");

 system("PAUSE");
 return 0;
}