/* 23. Criar um algoritmo que a partir da idade e peso do paciente calcule a dosagem
de determinado medicamento e imprima a receita informando quantas gotas do
medicamento o paciente deve tomar por dose. Considere que o medicamento
em questão possui 500 mg por ml, e que cada ml corresponde a 20 gotas.
- Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual
ou acima de 60 quilos devem tomar 1000 mg; com peso abaixo de 60 quilos
devem tomar 875 mg.
- Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada
pelo peso corpóreo conforme a tabela a seguir:
Peso              |   Dosagem 
5 kg a 9 kg       |   125 mg 
9,1 kg a 16 kg    |   250 mg 
16,1 kg a 24 kg   |   375 mg 
24,1 kg a 30 kg   |   500 mg 
Acima de 30 kg    |    750 mg */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  int idade, dosagem, gotas;
  float peso;

  printf("Informe a idade do paciente:");
  scanf("%d", &idade);
  printf("Informe o peso do paciente:");
  scanf("%f", &peso);

  if (idade < 12)
  {
    if (peso >= 5 && peso <= 9)
    {
      dosagem = 125;
    }
    else if (peso >= 9.1 && peso <= 16)
    {
      dosagem = 250;
    }
    else if (peso >= 16.1 && peso <= 24)
    {
      dosagem = 375;
    }
    else if (peso >= 24.1 && peso <= 30)
    {
      dosagem = 500;
    }
    else if (peso > 30)
    {
      dosagem = 750;
    }
  }
  else
  {
    if (peso >= 60)
    {
      dosagem = 1000;
    }
    else
    {
      dosagem = 875;
    }
  }

  gotas = (20 * dosagem) / 500;

  printf("Paciente tem que tomar %d gotas do remedio recomendado pelo medico! \n", gotas);

  system("PAUSE");
  return 0;
}