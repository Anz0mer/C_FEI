#include <stdio.h>
#include "ex4.h"

void exibe(int m[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int soma(int v[], int tamanho) {
    int resultado = 0;
    for (int i = 0; i < tamanho; i++) {
        resultado += v[i];
    }
    return resultado;
}

int subtracao(int v[], int tamanho) {
    int resultado = v[0];
    for (int i = 1; i < tamanho; i++) {
        resultado -= v[i];
    }
    return resultado;
}

float media(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return (float) soma / tamanho;
}

void duplica(int v[], int v2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        v2[i] = 2 * v[i];
    }
}

int produtoEscalar(int v1[], int v2[], int tamanho) {
    int resultado = 0;
    for (int i = 0; i < tamanho; i++) {
        resultado += v1[i] * v2[i];
    }
    return resultado;
}

void somaMatrizes(int m1[][3], int m2[][3], int r[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            r[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void multiplica(int valor, int m[][2], int r[][2], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            r[i][j] = valor * m[i][j];
        }
    }
}
