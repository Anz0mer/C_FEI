#include "ex3.h"

int somatorio(int min, int max) {
    int soma = 0;
    for (int i = min; i <= max; i++) {
        soma += i;
    }
    return soma;
}

int somatorioComPasso(int min, int max, int passo) {
    int soma = 0;
    for (int i = min; i <= max; i += passo) {
        soma += i;
    }
    return soma;
}

int somaParImpar(int min, int max, int par) {
    int soma = 0;
    for (int i = min; i <= max; i++) {
        if (par != 0) {
            if (i % 2 == 0) {
                soma += i;
            }
        } else {
            if (i % 2 != 0) {
                soma += i;
            }
        }
    }
    return soma;
}

int produtorio(int min, int max) {
    int produto = 1;
    for (int i = min; i <= max; i++) {
