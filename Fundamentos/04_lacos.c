#include <stdio.h>

void main() {
    /*
    * . Repetições ou laços: são trechos de códigos que serão executados n vezes;
    *   . for;
    *   . while;
    *   . do...while;
    */
    
    /*
    * . for(inicialização; condição; iteração) {}
    */
    for(int i = 0; i < 10; i++) {
        printf("Hello World \n");
    }
    
    /*
    * . O mesmo for acima escrito como while e do...while;
    */
    int i = 0;
    while(i < 10) {
        printf("Hello World \n");
        i++;
    }
    
    int j = 0;
    do{
        printf("Hello World \n");
        j++;
    } while(j < 10);
}
