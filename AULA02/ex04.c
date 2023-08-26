#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    switch(x){
        case 1: 
            printf("Escolha 1");
            break;
        case 2: 
            printf("Escolha 2");
            break;
        default: 
            printf("Volta e escolhe ou 1 ou 2 caralh0");
    }
}
