#include <stdio.h>
#include "ex3.h"

int main() {
    // Teste da função somatorio()
    int soma = somatorio(1, 5);
    printf("Somatorio de 1 a 5: %d\n", soma);

    // Teste da função somatorioComPasso()
    int somaPasso = somatorioComPasso(1, 10, 2);
    printf("Somatorio de 1 a 10 com passo 2: %d\n", somaPasso);

    // Teste da função somaParImpar()
    int somaPar = somaParImpar(1, 10, 1);
    int somaImpar = somaParImpar(1, 10, 0);
    printf("Soma dos pares de 1 a 10: %d\n", somaPar);
    printf("Soma dos impares de 1 a 10: %d\n", somaImpar);

    // Teste da função produtorio()
    int produto = produtorio(1, 5);
    printf("Produtorio de 1 a 5: %d\n", produto);

    // Teste da função fatorial()
    int fatorialNum = 5;
    int fatorialResult = fatorial(fatorialNum);
    printf("Fatorial de %d: %d\n", fatorialNum, fatorialResult);

    // Teste da função fibonacciSeq()
    int fibonacciNum = 10;
    printf("Sequencia de Fibonacci ate %d:\n", fibonacciNum);
    fibonacciSeq(fibonacciNum);

    // Teste da função fibonacci()
    int fibonacciPos = 6;
    int fibonacciResult = fibonacci(fibonacciPos);
    printf("Fibonacci na posicao %d: %d\n", fibonacciPos, fibonacciResult);

    return 0;
}
