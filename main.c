/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade; // Armazena a idade digitada pelo usuário
    
    printf("Digite a sua idade: ");
    scanf("%i", &idade); // Lê a idade
    
    // Verifica se é maior de idade mas não idoso
    if (idade >= 18 & idade < 60) { // 
        printf("Você é maior de idade");
    }
    
    // Verifica se é idoso (60 anos ou mais)
    if (idade >= 60){
        printf("Você é idoso");
    }
    
    // Verifica se é menor de idade
    if (idade < 18) {
        printf("Você é menor de idade");
    }
    
    return 0; // Fim do programa
}
