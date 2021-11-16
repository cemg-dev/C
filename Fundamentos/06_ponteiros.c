#include<stdio.h>

void main() {
    /*
    * Um ponteiro é um endereço de memória que aponta para outro endereço de memória, ou seja, é uma referência a um endereço de
    * memória já alocado.
    *   . Detalhes:
    *      . São utilizados principalmente em estruturas de dados a fim de melhorar o desempenho, pois ao envés de alocar cópias
    *       inteiras de certos dados, criamos apenas referências a estes dados já alocados o que é mais leve, pois um ponteiro consome
    *       menos memória;
    *      . Um ponteiro pode apontar para outro ponteiro e assim em diante.
    */
    int n = 10;
    int* p1 = &n;        //Declaramos ponteiros específicos para endereços de memória que armazenam certos tipos de dados
    printf("%d\n", *p1);

    float f = 12.2;
    float* p2 = &f;
    printf("%f.2f\n", *p2);

    char str[] = {'d','a','d','o'};
    char* p3 = str;      // Não precisamos passar &, pois em C, uma string já é um ponteiro para um conjunto de caracteres
    printf("%s\n", p3);

    int *p4 = &n;
    int **p5 = &p4;     // Ponteiros podem apontar para outros ponteiros e assim por diante
    int ***p6 = &p5;
    printf("%d\n", ***p6);
}
