#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para adicionar um elemento à lista
void adicionaElemento(Node** head, int value) {
    // Criação de um novo nó
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    // Se a lista estiver vazia, o novo nó será o primeiro
    if (*head == NULL) {
        *head = newNode;
    } else {
        // Caso contrário, percorre a lista até o último nó
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        // Adiciona o novo nó no final da lista
        current->next = newNode;
    }
}

// Função para remover um elemento da lista
void removeElemento(Node** head, int value) {
    Node* current = *head;
    Node* previous = NULL;

    // Percorre a lista até encontrar o nó com o valor desejado
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    // Se o valor não for encontrado, retorna
    if (current == NULL) {
        return;
    }

    // Se o nó a ser removido for o primeiro da lista
    if (previous == NULL) {
        *head = current->next;
    } else {
        // Caso contrário, remove o nó da lista
        previous->next = current->next;
    }

    // Libera a memória do nó removido
    free(current);
}

// Função para buscar um elemento na lista
Node* buscaElemento(Node* head, int value) {
    Node* current = head;

    // Percorre a lista até encontrar o nó com o valor desejado
    while (current != NULL && current->data != value) {
        current = current->next;
    }

    // Retorna o nó encontrado (ou NULL se não encontrado)
    return current;
}

// Função para calcular o tamanho da lista
int calculaTamanho(Node* head) {
    int count = 0;
    Node* current = head;

    // Percorre a lista contando o número de nós
    while (current != NULL) {
        count++;
        current = current->next;
    }

    // Retorna o tamanho da lista
    return count;
}

// Função para exibir a lista
void exibeLista(Node* head) {
    Node* current = head;

    // Percorre a lista exibindo o valor de cada nó
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

// Função principal para testar as funções
int main() {
    Node* head = NULL;

    // Testando as funções
    adicionaElemento(&head, 10);
    adicionaElemento(&head, 20);
    adicionaElemento(&head, 30);
    adicionaElemento(&head, 40);

    printf("Lista: ");
    exibeLista(head);

    printf("Tamanho da lista: %d\n", calculaTamanho(head));

    Node* busca = buscaElemento(head, 30);
    if (busca != NULL) {
        printf("Elemento 30 encontrado na lista.\n");
    } else {
        printf("Elemento 30 não encontrado na lista.\n");
    }

    removeElemento(&head, 20);

    printf("Lista após remover o elemento 20: ");
    exibeLista(head);

    return 0;
}
