#include <stdio.h>

int f(int i){
    if (i <= 1)
        return 1;
    else
        return f(i - 1) + i;
}
