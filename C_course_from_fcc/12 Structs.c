#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(){
	struct Student student1;
	student1.age = 20;
	student1.gpa = 3.17;
	strcpy(student1.major, "Computer Engineering");
	strcpy(student1.name, "Andy");
	
	struct Student student2;
	student2.age = 21;
	student2.gpa = 2.89;
	strcpy(student2.major, "Computer Science");
	strcpy(student2.name, "John");
	
	printf("%f\n", student1.gpa);
	printf("%s", student2.major);
}
