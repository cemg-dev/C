#include <stdio.h>

/*
* . Toda função possue o seguinte formato:
*     tipo nome(parâmetros){
*       escopo      
*     }
*/
int soma(int n1, int n2) {
    return (n1 + n2);
}

int subtracao(int n1, int n2) {
    return (n1 - n2);
}

/*
* . Obs: embora seja um tipo de retorno void não é um tipo primitivo. Ele apenas indica que a função não possue nenhum retorno;
* . Geralmente funções usadas para imprimir valores ou simplesmente computar e imprimir o resultado sem precisar retorná-lo;
*/
void imprime(int numero) {
    printf("Resultado: %d\n", numero);
}

void main() {
    int sum, n1, n2;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    
    sum = soma(n1, n2); // o resultado da função soma foi armazenado na variável sum;
    imprime(sum);
    
    imprime(subtracao(n1, n2)); // o resultado de uma função pode ser imprimido diretamente
}
