#include <stdio.h>

/*
* As condições em C são dadas por if, else if e else
* Detalhes:
*    . Podemos ter if seguido de vários else if e um else final. Outro ponto é que você
*    deve garantir que este else final é a última condição ou possibilidade restante de
*    uma análise.
*/

/*
* Exemplificando, suponha que queremos saber o imc (Índice de Massa Corporal) de uma pessoa
* e seu estado na tabela de imc para analisar se ela está abaixo, acima ou no peso ideal.
*/
void main() {
    int peso;
    float altura;

    printf("Qual o seu peso? ");
    scanf("%d", &peso);
    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    /*
    * Temos os dados de peso e altura da pessoa. Em seguida, calculamos o imc usando a fórmula:
    * imc é igual ao peso dividido pela altura ao quadrado.
    */

    float imc = peso / (altura * altura);
    printf("Seu imc é de %.2f \n", imc);
    if(imc < 18.5){
     printf("Você está abaixo do peso \n");
    }
    else if((imc >= 18.5) & (imc < 25)){
      printf("Você está no peso ideal \n");
    }
    else if((imc >= 25) & (imc < 30)){
      printf("Você está em sobrepeso \n");
    }
    else if((imc >= 30) & (imc < 35)){
      printf("Você está em obesidade I \n");
    }
    else if((imc >= 35) & (imc < 40)){
      printf("Você está em obesidade II \n");
    } else {
      printf("Você está em obesidade III (ou Morbida) \n"); // Observe que esta é a última condição restante
    }
}

