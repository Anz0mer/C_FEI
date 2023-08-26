#include <stdio.h>

int fact(int n){
    if(n <= 1)
        return 1;
    else 
        return fact(n-1) * n;
}
int main(){
    int i = 10;
    int x = fact(i);
    printf("%d %d\n", i, x);
}
