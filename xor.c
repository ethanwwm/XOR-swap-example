#include <stdio.h>

void swap(int *x, int *y){
    printf("Before swapping:\n");
    printf("*x = %d \n*y = %d\n\n", *x, *y);
    
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
    
    printf("After swapping:\n");
    printf("*x = %d \n*y = %d\n\n", *x, *y);
}

int main(){
    int firstNumber = 4;
    int secondNumber = 400;
    int *x = &firstNumber;
    int *y = &secondNumber;
    
    swap(x, y);
}
