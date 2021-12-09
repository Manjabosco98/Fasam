/* 6. Faça um programa que leia o código dos produtos pedidos e as quantidades
desejadas; calcule e mostre o valor a ser pago por produto (preço *
quantidade) e o total do pedido. Considere que o cliente deve informar quando
o pedido deve ser encerrado. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

int main()
{
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int op, codigo, quantidade, quantCacho, quantHamb, quantCheese, quantEgg, quantRefri;
  float preco, precoTotal, precoCacho, precoHamb, precoCheese, precoEgg, precoRefri;

  quantidade = 0;
  quantCacho = 0;
  quantHamb = 0;
  quantCheese = 0;
  quantEgg = 0;
  quantRefri = 0;
  precoCacho = 0;
  precoHamb = 0;
  precoCheese = 0;
  precoEgg = 0;
  precoRefri = 0;
  preco = 0;
  precoTotal = 0;

  printf("\t\t ---------------------- \n");
  printf("\t\t Lanchonete Cibernetica \n");
  printf("\t\t ---------------------- \n");
  do
  {
    printf(" -------- \n");
    printf(" Cardápio \n");
    printf(" -------- \n");
    printf(" (1)Cachorro Quente R$1,50\n (2)Hamburguer R$2,00\n (3)Cheeseburguer R$2,50\n (4)Eggcheeseburguer R$3,00\n (5)Refrigerante R$1,50\n (6)Encerrar pedido\n");
    scanf("%d", &op);
    printf("\n\n");
    switch (op)
    {
    case 1:
      printf("\t\t Cachorro Quente\n");
      printf("Digite a quantidade de cachorro quente que deseja:");
      scanf("%d", &quantCacho);
      precoCacho = quantCacho * 1.50;
      break;
    case 2:
      printf("\t\t Hamburguer\n");
      printf("Digite a quantidade de Hamburguer que deseja:");
      scanf("%d", &quantHamb);
      precoHamb = quantHamb * 2.00;
      break;
    case 3:
      printf("\t\t Cheeseburguer\n");
      printf("Digite a quantidade de Cheeseburguer que deseja:");
      scanf("%d", &quantCheese);
      precoCheese = quantCheese * 2.50;
      break;
    case 4:
      printf("\t\t Eggcheeseburguer\n");
      printf("Digite a quantidade de eggcheeseburguer que deseja:");
      scanf("%d", &quantEgg);
      precoEgg = quantEgg * 3.00;
      break;
    case 5:
      printf("\t\t Refrigerante\n");
      printf("Digite a quantidade de refrigerante que deseja:");
      scanf("%d", &quantRefri);
      precoRefri = quantRefri * 1.50;
      break;
    case 6:
      quantidade = quantCacho + quantHamb + quantCheese + quantEgg + quantRefri;
      preco = precoCacho + precoHamb + precoCheese + precoEgg + precoRefri;
      printf("valor a ser pago pelo os pedidos feitos R$%.2f\n", preco);
      break;
    }
    printf("\n\n");
  } while (codigo != 0);

  SetConsoleOutputCP(CPAGE_DEFAULT);
  return 0;
}