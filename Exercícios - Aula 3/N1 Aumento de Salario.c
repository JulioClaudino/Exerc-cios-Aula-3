#include <stdio.h>
#include <math.h>

int main(void)
{
    float salario, novoSalario, reajuste;

    printf("Informe o salario: ");
    scanf("%f", &salario);

   if(salario >= 0 && salario <= 400) {
       reajuste = salario * 0.15;
       novoSalario = salario + reajuste;
       
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 15%%\n");

   } else if(salario > 400 && salario <= 800) {
       reajuste = salario * 0.12;
       novoSalario = salario + reajuste;
       
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 12%%\n");

   }else if(salario > 800 && salario <= 1200) {
       reajuste = salario * 0.10;
       novoSalario = salario + reajuste;
       
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 10%%\n");

   }else if(salario > 1200 && salario <= 2000) {
       reajuste = salario * 0.07;
       novoSalario = salario + reajuste;
       
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 7%%\n");
    
   }else if(salario > 2000) {
       reajuste = salario * 0.04;
       novoSalario = salario + reajuste;
       
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: 4%%\n");
    
   };

   system("PAUSE");
}
