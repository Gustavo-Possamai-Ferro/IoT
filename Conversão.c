/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float metros; // Variável para armazenar o valor em metros
    
    // Solicita ao usuário o valor em metros
    printf("Digite o valor em metros: ");
    scanf("%f", &metros); // <-- Faltava o ponto e vírgula no final
    
    // Calcula as conversões
    float resulcm = metros * 100;   // Converte metros para centímetros
    float resuldc = metros * 10;    // Converte metros para decímetros
    float resulmm = metros * 1000;  // Converte metros para milímetros
    
    // Exibe os resultados
    printf("Centimetros: %.2f\n", resulcm); // <-- Corrigi formatação e \n
    printf("Decimetros: %.2f\n", resuldc);  // <-- Nome corrigido
    printf("Milimetros: %.2f\n", resulmm);  // <-- Nome corrigido

    return 0; // Indica que o programa terminou 
}
