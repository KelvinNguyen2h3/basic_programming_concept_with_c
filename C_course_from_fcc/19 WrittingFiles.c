#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * fpointer = fopen("employee.txt", "w");
	
	fprintf(fpointer, "ABC\nXYZ\nMNK\n");
	
	fclose(fpointer);
	
	return 0;
}
