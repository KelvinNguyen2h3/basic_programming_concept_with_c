#include <stdio.h>
#include <stdlib.h>

int main(){
	int index = 0;
	
	while (index <= 5) {
		printf("%d", index);
		index++;
	}
	
	index = 0;
	do{
		printf("%d", index);
		index++;
	} while(index <= 3);
	return 0;
}
