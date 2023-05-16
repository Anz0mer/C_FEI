#include <stdio.h>

//Implemente uma função que recebe um número e imprime o resultado deste número multiplicado pelos valores de 0 a 10;
void multiplicacaoPorDez(int numero) {
    for (int i = 0; i <= 10; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
}

//Implemente uma função que receba um valor inteiro e retorna 1 se o valor é ímpar e 0 se o valor é par;
int isImpar(int valor) {
    if (valor % 2 == 0) {
        return 0; // par
    } else {
        return 1; // impar
    }
}

//Implemente uma função que recebe um valor inteiro e retorna 1 se o valor é positivo, -1 se for negativo e 0 se for igual a 0;
int verificaSinal(int valor) {
    if (valor > 0) {
        return 1; // positivo
    } else if (valor < 0) {
        return -1; // negativo
    } else {
        return 0; // igual a zero
    }
}

//Implemente uma função que recebe 2 valores inteiros e retorna o maior e uma função que retorne o menor. Usando estas função, implemente a versão delas que recebe 3 e 4 valores;
int obterMaior(int a, int b) {
    return (a > b) ? a : b;
}

int obterMenor(int a, int b) {
    return (a < b) ? a : b;
}

//Faça um código que receba do usuário uma operação aritmética e dentro de um loop leia números até que o usuário digite 0. Imprima o resultado de aplicar a mesma operação usando todos os números que o usuário digitou, menos o 0;
int main() {
    char operacao;
    int numero, resultado;

    printf("Digite a operacao aritmetica (+, -, *, /): ");
    scanf(" %c", &operacao);

    resultado = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            switch (operacao) {
                case '+':
                    resultado += numero;
                    break;
                case '-':
                    resultado -= numero;
                    break;
                case '*':
                    resultado *= numero;
                    break;
                case '/':
                    resultado /= numero;
                    break;
                default:
                    printf("Operacao invalida!\n");
                    break;
            }
        }
    } while (numero != 0);

    printf("Resultado: %d\n", resultado);

    return 0;
