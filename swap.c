#include<stdio.h>

void swapVer1(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Swapped_ver1\n");
}

void swapVer2(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Swapped_ver2\n");
}

int main(){
    int a = 10, b = 20;
    swapVer1(a, b);
    printf("a = %d,b = %d\n", a, b);
    swapVer2(&a, &b);
    printf("a = %d,b = %d", a, b);
    return 0;
}