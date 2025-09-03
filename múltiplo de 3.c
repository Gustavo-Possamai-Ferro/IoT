/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero; // Variável para armazenar o número digitado pelo usuário
    
    // Solicita ao usuário que digite um número inteiro
    printf("Digite o seu número: ");
    scanf("%d", &numero); // Lê o número informado e armazena em 'numero'
    
    // Verifica se o número é divisível por 3
    if (numero % 3 == 0) { 
        // Se for divisível por 3 (resto da divisão é 0)
        numero += 1; // Soma 1 ao número
        printf("O seu número é divisível por 3, %d", numero);
    }
    else {
        // Se NÃO for divisível por 3
        numero -= 1; // Subtrai 1 do número
        printf("O seu número não é divisível por 3, %d", numero);
    }
    
    return 0; // Indica que o programa terminou com sucesso
}
