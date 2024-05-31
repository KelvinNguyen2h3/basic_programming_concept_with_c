#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[20];
	printf("Enter your full name: ");
	fgets(name,20,stdin); //  fgets(char,size,stdin); stdin la nhap tu ban phim
	printf("Your full name is %s", name);
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Your age is %d", age);

	return 0;
}
