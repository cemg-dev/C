#include <stdio.h>
#include <stdlib.h> //biblioteca com as funções para alocação dinâmica

int* alocar_vetor(int* vetor, int tamanho) {
	vetor = (int*) malloc(sizeof(int) * tamanho);
	return vetor;
}

int* desalocar_vetor(int* vetor) {
	free(vetor);
	return NULL;
}


int** alocar_matriz(int** matriz, int linhas, int colunas) {
	matriz = (int**) malloc(sizeof(int*) * linhas);
	for(int i = 0; i < linhas; i++) {
		matriz[i] = (int*) malloc(sizeof(int) * colunas);
	}
	return matriz;
}

int** desalocar_matriz(int** matriz, int linhas) {
	for(int i = 0; i < linhas; i++) {
		free(matriz[i]);
	}
	free(matriz);
	return NULL;
}

void main() {
    // Alocando e desalocando vetor
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int* vetor;
	vetor = alocar_vetor(vetor, tamanho);
	
	printf("Preenchendo Vetor Com Valores:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor:[ ");
    for(int i = 0; i < tamanho; i++) {
    	printf("%d ", vetor[i]);
    }
    printf("]\n");
    
    vetor = desalocar_vetor(vetor);
    if(vetor == NULL) {
    	printf("Vetor desalocado com sucesso\n");
    } else {
    	printf("Ocorreu algum erro\n");
    }
    
    // Alocando e desalocando matriz
    int linhas;
	printf("Digite o tamanho das linhas da matriz: ");
	scanf("%d", &linhas);
	
	int colunas;
	printf("Digite o tamanho das colunas da matriz: ");
	scanf("%d", &colunas);
	
	int** matriz;
	matriz = alocar_matriz(matriz, linhas, colunas);
	
	printf("Preenchendo Matriz Com Valores:\n");
    for(int i = 0; i < linhas; i++) {
    	for(int j = 0; j < colunas; j++) {
    		printf("Digite um valor para a posição [%d][%d]: ", i, j);
    		scanf("%d", &matriz[i][j]);
    	}
    }
    
    printf("Matriz:\n");
    for(int i = 0; i < linhas; i++) {
    	printf("| ");
    	for(int j = 0; j < colunas; j++) {
    		printf("%d ", matriz[i][j]);
    	}
    	printf("|\n");
    }
    
    matriz = desalocar_matriz(matriz, linhas);
    if(matriz == NULL) {
    	printf("Matriz desalocada com sucesso\n");
    } else {
    	printf("Ocorreu algum erro\n");
    }
}
