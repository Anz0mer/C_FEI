#include <stdio.h>
#include "ex4.h"

int main() {
    int v1[] = {1, 2, 3, 4, 5};
    int v2[] = {6, 7, 8, 9, 10};
    int resultado;
    
    // Testando a função soma
    resultado = soma(v1, 5);
    printf("Resultado da soma: %d\n", resultado);
    
    // Testando a função subtracao
    resultado = subtracao(v1, 5);
    printf("Resultado da subtracao: %d\n", resultado);
    
    // Testando a função media
    float media_resultado = media(v1, 5);
    printf("Media: %.2f\n", media_resultado);
    
    // Testando a função duplica
    int v2_duplicado[5];
    duplica(v1, v2_duplicado, 5);
    printf("Vetor duplicado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v2_duplicado[i]);
    }
    printf("\n");
    
    // Testando a função produtoEscalar
    resultado = produtoEscalar(v1, v2, 5);
    printf("Produto escalar: %d\n", resultado);
    
    // Testando a função exibe
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Matriz:\n");
    exibe(matriz, 2, 3);
    
    // Testando a função somaMatrizes
    int matriz1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matriz2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int resultado_matriz[2][3];
    somaMatrizes(matriz1, matriz2, resultado_matriz, 2, 3);
    printf("Resultado da soma de matrizes:\n");
    exibe(resultado_matriz, 2, 3);
    
    // Testando a função multiplica
    int matriz3[2][2] = {{1, 2}, {3, 4}};
    int resultado_multiplicacao[2][2];
    multiplica(2, matriz3, resultado_multiplicacao, 2, 2);
    printf("Resultado da multiplicacao da matriz por 2:\n");
    exibe(resultado_multiplicacao, 2, 2);
    
    return 0;
}
