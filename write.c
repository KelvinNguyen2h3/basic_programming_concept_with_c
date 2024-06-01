#include <stdio.h>

int main(){
	FILE * fpointer = fopen("myfile.txt", "w");
	
	fprintf(fpointer, "Hello file");
	
	fclose(fpointer);
}