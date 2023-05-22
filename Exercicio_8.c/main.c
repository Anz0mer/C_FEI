#include "exercicio.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  int n1 = 5, n2 = 7;

  int *x1 = malloc(n1 * sizeof(int));
  int *x2 = malloc(n2 * sizeof(int));

  for (int i = 0; i < n1; i++) {
    *(x1 + i) = i;
    *(x2 + i) = i;
  }

  for (int i = n1; i < n2; i++)
    *(x2 + i) = i;

  printArray(x1, n1);
  printArray(x2, n2);

  int n3;
  int *x3 = uniao(x1, n1, x2, n2, &n3);

  printf("Tamanho de X3: %d\n", n3);
  printArray(x3, n3);
}
