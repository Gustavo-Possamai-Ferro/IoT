/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario; // Variável para armazenar o salário digitado pelo usuário
    int codigo;    // Variável para armazenar o código do cargo

    // Solicita ao usuário que digite o salário
    printf("Digite o seu salario: ");
    scanf("%f", &salario); // Lê o salário informado pelo usuário

    // Solicita ao usuário que digite o código do cargo
    printf("Digite o seu codigo: ");
    scanf("%d", &codigo); // Lê o código informado pelo usuário

    // Estrutura condicional para verificar o código e aplicar o aumento correspondente
    if (codigo == 1) { 
        // Código 1 → aumento de 7%
        salario += salario * 0.07; // Acrescenta 7% ao salário
        printf("O seu salário com acréscimo de 7%% é: %f", salario);
    } else if (codigo == 2) { 
        // Código 2 → aumento de 9%
        salario += salario * 0.09;
        printf("O seu salário com acréscimo de 9%% é: %f", salario);
    } else if (codigo == 3) { 
        // Código 3 → aumento de 5%
        salario += salario * 0.05;
        printf("O seu salário com acréscimo de 5%% é: %f", salario);
    } else if (codigo == 4) { 
        // Código 4 → aumento de 12%
        salario += sala
