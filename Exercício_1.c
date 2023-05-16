#include <stdio.h>
#include <math.h>

//Implemente o "hello, world"
void helloWorld() {
    printf("Hello, World!\n");
}

//Código com variáveis inteiras:
void inteiras() {
    int num1 = 10;
    int num2 = 5;
    int resultado;

    resultado = num1 + num2;
    printf("Valor de num1: %d\n", num1);
    printf("Valor de num2: %d\n", num2);
    printf("Soma: %d\n", resultado);
    printf("Subtração: %d\n", num1 - num2);
    printf("Divisão: %d\n", num1 / num2);
    printf("Multiplicação: %d\n", num1 * num2);
    printf("Incremento: %d\n", ++num1);
    printf("Decremento: %d\n", --num2);
    printf("Resto de Divisão: %d\n", num1 % num2);
}

//Código com variáveis de ponto flutuante:
void floatingPoint() {
    float num1 = 10.5;
    float num2 = 3.2;
    float resultado;

    resultado = num1 + num2;
    printf("Valor de num1: %.2f\n", num1);
    printf("Valor de num2: %.2f\n", num2);
    printf("Soma: %.2f\n", resultado);
    printf("Subtração: %.2f\n", num1 - num2);
    printf("Divisão: %.2f\n", num1 / num2);
    printf("Multiplicação: %.2f\n", num1 * num2);
    printf("Incremento: %.2f\n", ++num1);
    printf("Decremento: %.2f\n", --num2);
    printf("Resto de Divisão: %.2f\n", fmod(num1, num2));
}

//Defina uma variável do tipo inteiro e exiba ela como todos os outros tipos que foram vistos na teoria
void tipointeiro() {
    int num = 42;

    //%d exibe o valor inteiro em base decimal.
    printf("Valor inteiro: %d\n", num);
    //%o exibe o valor em base octal.
    printf("Valor em octal: %o\n", num);
    //%x exibe o valor em base hexadecimal.
    printf("Valor em hexadecimal: %x\n", num);
    //%c exibe o valor como um caractere correspondente na tabela ASCII.
    printf("Valor em caractere: %c\n", num);
    //%f exibe o valor como ponto flutuante.
    printf("Valor em ponto flutuante: %f\n", (float)num);
    //%e exibe o valor como ponto flutuante com notação científica.
    printf("Valor em ponto flutuante com notação científica: %e\n", (float)num);
}

//Tente usar o scanf para ler algumas variáveis do teclado.
void variavelscan() {
    int num1;
    float num2;
    char nome[50];

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite um número de ponto flutuante: ");
    scanf("%f", &num2);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Você digitou:\n");
    printf("Número inteiro: %d\n", num1);
    printf("Número de ponto flutuante: %.2f\n", num2);
    printf("Nome: %s\n", nome);
}

//Crie uma variável e não atribua nenhum valor a ela. Imprima o valor desta variável
void variaveluninitialized() {
    // Variável não inicializada
    int num;  

    printf("Valor da variável: %d\n", num);
}

int main() {
    helloWorld();
    inteiras();
    floatingPoint();
    tipointeiro();
    variavelscan();
    variaveluninitialized();

    return 0;
}
