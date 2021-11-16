#include <stdio.h>
#include "soma.h" // note que importamos o arquivo de cabeçalho e não o que implementa;
/*
* Detalhes:
*   . A importação de soma.c ao envés de soma.h funcionaria, mas não utilizaria o arquivo .h que esconde nossa implementação;
*   . Para que o uso de interfaces faça sentido devemos compilar os arquivos da forma correta:
*       . gcc -c soma.c , criará um arquivo chamado soma.o;
*       . gcc -c menu.c , criará um arquivo chamado menu.o;
*       . gcc soma.o menu.o -o executavel , criará um arquivo chamado executavel a partir dos arquivos compilados soma.o e menu.o;
*/

void main() {
    int n1 = 10, n2 = 10, resultado;
    resultado = soma(n1, n2);
    
    printf("Resultado: %d \n", resultado);    
}
