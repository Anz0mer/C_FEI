#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* soma(int a, int b) {
    int* resultado = malloc(sizeof(int));
    *resultado = a + b;
    return resultado;
}

int* subtracao(int a, int b) {
    int* resultado = malloc(sizeof(int));
    *resultado = a - b;
    return resultado;
}

int* multiplicacao(int a, int b) {
    int* resultado = malloc(sizeof(int));
    *resultado = a * b;
    return resultado;
}

int* divisao(int a, int b) {
    int* resultado = malloc(sizeof(int));
    *resultado = a / b;
    return resultado;
}

int* resto(int a, int b) {
    int* resultado = malloc(sizeof(int));
    *resultado = a % b;
    return resultado;
}

int* potencia(int a, int b) {
    int* resultado = malloc(sizeof(int));
    *resultado = pow(a, b);
    return resultado;
}

typedef int* (*Operacao)(int, int);

Operacao operacoes[] = {
    soma,
    subtracao,
    multiplicacao,
    divisao,
    resto,
    potencia
};

int main() {
    int continuar = 1;
    while (continuar) {
        int opcao, num1, num2;
        printf("=== Menu de Opções ===\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Resto\n");
        printf("6. Potência\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            continuar = 0;
            continue;
        }

        if (opcao < 1 || opcao > 6) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        Operacao operacao = operacoes[opcao - 1];
        int* resultado = operacao(num1, num2);
        printf("Resultado: %d\n", *resultado);
        free(resultado);

        printf("Deseja realizar outra operação? (1 - Sim / 0 - Não): ");
        scanf("%d", &continuar);
        printf("\n");
    }

    return 0;
}
