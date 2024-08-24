#include<stdio.h>

int main(){
    int a, b, n, rev=0;
    printf("Enter number you want to check palindrome: ");
    scanf("%d", &n);
    b = n;
    while(n>0){
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    if(rev == b) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}