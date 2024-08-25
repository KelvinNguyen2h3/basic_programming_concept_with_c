#include<stdio.h>

int main(){
    int a[6] = {0,1,2,3,4,5};
    int *p = a; //point to address of first array member a[0]
    for(int i=0; i<=5;i++){
        printf("%p\n", p);
        p+=1;
    }
    return 0;
}