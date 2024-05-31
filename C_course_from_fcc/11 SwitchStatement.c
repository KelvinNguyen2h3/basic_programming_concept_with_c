#include <stdio.h>
#include <stdlib.h>


int main(){
	char grade;
	printf("Enter grade: ");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A': 
			printf("A for Amazing");
			break;
		case 'B': 
			printf("B for Banana");
			break;
		case 'C': 
			printf("C for Coconut");
			break;
		case 'D': 
			printf("D for Dude");
			break;
		case 'F': 
			printf("F for Failed");
			break;
		default: 
			printf("Invalid Grade");
			break;
	}
}
