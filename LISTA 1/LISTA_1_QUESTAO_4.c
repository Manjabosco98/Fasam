/*Escrever um algoritmo que leia o nome de um aluno e as notas das três
provas que ele obteve no semestre. No final informar o nome do aluno e a
sua média (aritmética).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 
 char nome[20];
 float n1, n2, n3, media;
 
 printf("\n\n");
 printf("Informe o nome do aluno:");
 scanf("%s", nome);

 printf("Informe a primeira nota:");
 scanf("%f", &n1);
 printf("Informe a segunda nota:");
 scanf("%f", &n2);
 printf("Informe a tercera nota:");
 scanf("%f", &n3);
 printf("\n");

 media = (n1 + n2 + n3) / 3;

 printf("Aluno:%s, Média:%.2f", nome, media);
 printf("\n");
 
 system("cls");
 system("PAUSE");
 return 0;
}