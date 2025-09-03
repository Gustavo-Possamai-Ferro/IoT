/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1, numero2, soma; // Variáveis para armazenar dois números e o resultado da soma
    
    // Solicita o primeiro número ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1); // Lê e armazena em 'numero1'
    
    // Solicita o segundo número ao usuário
    printf("Digite o segundo numero: ");
    scanf("%i", &numero2); // Lê e armazena em 'numero2'
    
    // Calcula a soma dos dois números
    soma = numero1 + numero2;
    
    // Verifica se a soma é maior que 10
    if (soma > 10) {
        printf("O resultado é %i", soma); // Mostra o valor da soma
    }
    else {
        // Caso contrário, mostra apenas a mensagem
        printf("O resultado é menor que 10");
    }
    
    return 0; // Indica que o programa terminou com sucesso
}
