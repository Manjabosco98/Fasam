/*Faça um algoritmo que receba a idade de 75 pessoas e mostre mensagem
informando “maior de idade” e “menor de idade” para cada pessoa.
Considere a idade a partir de 18 anos como maior de idade.*/

#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 int i, idade, quant_maior, quant_menor;
 
 printf("\n");
 for(i = 0; i <= 75; i++){
  printf("Informe a idade:");
  scanf("%d", &idade);
  if(idade >= 18 && idade <= 75){
   printf("Pessoas maiores de idade...");
   quant_maior++;
   printf("\n");
  }else if(idade < 18 && idade > 0){
   printf("Pessoas menores de idades...");
   quant_menor++;
   printf("\n");
  }else{
   printf("informacoes incorretas...\n");
  }
 }
 
 printf("Pessoas maiores de idades %d\n", quant_maior);
 printf("Pessoas menores de idades %d\n", quant_menor);
 printf("\n");

 system("PAUSE");
 return 0;
}