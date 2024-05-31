#include <stdio.h>
#include <stdlib.h>


int main(){
	double num1, num2;
	char op;
	printf("Enter 1st number: ");
	scanf("%lf", &num1);
	printf("Enter Operator: ");
	scanf(" %c", &op); //scanf char phai co khoang trong truoc %c
	printf("Enter 2nd number: ");
	scanf("%lf", &num2);
	
	if(op == '+') printf("%f", num1 + num2);
	else if(op == '-') printf("%f", num1 - num2);
	else if(op == '*') printf("%f", num1 * num2);
	else if(op == '/') printf("%f", num1 / num2);
	else printf("Invalid Operator");
}
