/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario, desconto, soma; // Variáveis para armazenar o salário, o desconto calculado e o salário final
    
    // Solicita ao usuário o valor do salário
    printf("Digite o seu salario: ");
    scanf("%f", &salario); // Lê o valor digitado
    
    // Caso 1: salário até 600 → isento de desconto
    if (salario <= 600) {
        printf("O seu salario é %f", salario);
    }
    
    // Caso 2: salário entre 600 e 1200
    if (salario > 600 && salario <= 1200) {
        desconto = salario * 0.20; // Calcula 20% de desconto
        soma = salario - desconto; // Subtrai do salário
        printf("O seu salario é %f", soma);
    }
    
    // Caso 3: salário entre 1200 e 2000
    if (salario > 1200 && salario <= 2000) {
        desconto = salario * 0.25; // Calcula 25% de desconto
        soma = salario - desconto;
        printf("O seu salario é %f", soma);
    }
    
    // Caso 4: salário acima de 2000
    if (salario > 2000) {
        desconto = salario * 0.30; // Calcula 30% de desconto
        soma = salario - desconto;
        printf("O seu salario é %f", soma);
    }
    
    return 0; // Indica execução bem-sucedida
}
