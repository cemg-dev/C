#include<stdio.h>

/*
* Estruturas são formas de criar novos tipos os quais podem conter um conjunto de tipos primitivos. Por exemplo, o tipo Pessoa
* pode conter uma string nome e um inteiro idade. Quando fazemos isso, estamos dizendo que um endereço de memória do tipo Pessoa contém
* endereços de memória do tipo string(vetor de caracteres) e do tipo inteiro, ou seja, criamos uma forma compacta de representar algo do 
* mundo real.
*/
typedef struct {
    char nome[100];
    int idade;
}Pessoa;

void main() {
    Pessoa pessoa;

    printf("Nome: ");
    scanf("%[^\n]s", pessoa.nome);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    printf("Nome: %s, Idade: %d\n", pessoa.nome, pessoa.idade);
}
