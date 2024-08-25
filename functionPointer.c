#include<stdio.h>

int multiply(int a, int b){
    return a * b;
}

int add(int a, int b){
    return a + b;
}

int main(){
    int (*func_ptr)(int, int);
    func_ptr = multiply;
    printf("5 x 10 = %d\n", func_ptr(5,10));
    func_ptr = add;
    printf("5 + 10 = %d", func_ptr(5,10));
    return 0;
}