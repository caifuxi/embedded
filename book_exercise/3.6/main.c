// main.c
#include <stdio.h>

int sum(int a, int b){
    int result;
    result = a + b;

    printf("result = %d\n", result);
    return result;
}

int main(void){

    SUM_ASM();
    return 0;
}
