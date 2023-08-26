#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int positivo = (x > 0) ? 1 : 0;

    if (positivo == 1)
        printf("x eh positivo");
    else
        printf("x nao eh positivo");
}
