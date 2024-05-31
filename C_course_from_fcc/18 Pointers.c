#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[2];
	char *pName = &name[2];
	
	int age;
	int *pAge = &age;
	
	double gpa = 3.17;
	double *pGpa = &gpa;
	
	printf("name: %p\nage: %p\ngpa: %p\n", pName, pAge, pGpa);
	
	
	printf("%f", *pGpa);
	return 0;
}
