#include <stdio.h>
#include <stdlib.h>


int main(){
	char name[2];
	int age;
	double gpa;
	
	printf("name: %p\nage: %p\ngpa: %p\n",&name,&age,&gpa);
}
