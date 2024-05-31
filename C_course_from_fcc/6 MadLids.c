#include <stdio.h>
#include <stdlib.h>

int main(){
	char color[20], noun[20], food[20];
	
	printf("Enter color, noun, food (with space): ");	

	scanf("%s%s%s", color, noun, food);
	
	printf("\nRoses are %s\n", color);
	printf("%s are blue\n", noun);
	printf("I love %s more than you", food);
	
	return 0;
}
