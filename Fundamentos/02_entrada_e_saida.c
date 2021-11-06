#include <stdio.h>

void main() {
    /*
    * . Tipos Primitivos mais comuns;
    * . Veremos como dar entrada e imprimir dados para variáveis de tipos primitivos;
    */
    
    /*
    * . scanf(tipo da variável, endereço de memória da variável);
    * . printf(saida formatada);
    */
    
    int n1;
    printf("Digite um número inteiro: ");  // imprime apenas a mensagem entre "";
    scanf("%d", &n1);                      // "%d" é reconhecido pela função scanf como uma entrada formatada para o tipo int;
    printf("Você digitou %d \n", n1);      // imprime a mensagem Você digitou número digitado. \n é uma quebra de linha;
    
    long n2;
    printf("Digite um número inteiro grande: ");
    scanf("%ld", &n2);                     // "%ld" é reconhecido pela função scanf como uma entrada formatada para o tipo long;
    printf("Você digitou %ld \n", n2);
    
    float n3;
    printf("Digite um número decimal: ");
    scanf("%f", &n3);                     // "%f" é reconhecido pela função scanf como uma entrada formatada para o tipo float;
    printf("Você digitou %.2f \n", n3);   // %f também funciona. %.2f formata a saída para um valor com duas casas decimais;
    
    double n4;
    printf("Digite um número decimal preciso: ");
    scanf("%lf", &n4);                     // "%lf" é reconhecido pela função scanf como uma entrada formatada para o tipo double;
    printf("Você digitou %lf \n", n4);
    
    char c1;
    printf("Digite um caractere: ");
    scanf(" %c", &c1);                     // " %c" é reconhecido pela função scanf como uma entrada formatada para o tipo char;
    printf("Você digitou %c \n", c1);
    /*
    * Obs: "%c" geralmente é escrito como " %c" ou até "\n%c". Isto ocorre porque para este tipo de entrada o scanf acaba pegando
    * como valor o "enter" anterior.
    */
}
