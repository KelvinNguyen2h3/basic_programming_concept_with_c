#include<stdio.h>

int factorialUsingLoop(int num){
    int fac = 1;
    int i;
    for(i=1;i<=num;i++){
        fac = fac*i;
    }
    return fac;
}

int factorialUsingRecursion(int num){
    if(num==0||num==1) return 1;
    else return num*factorialUsingRecursion(num-1);
}

int main(){
    int n;
    printf("This n! program, enter n = ");
    scanf("%d", &n);
    printf("Result = %d", factorialUsingRecursion(n));
    return 0;
}