#include <stdio.h>
#include <stdlib.h>


int main(){
	int num[3][2] = {
					{1,2},
					{3,4},
					{5,6}
					};
	
	int i,j;
	//nested loop mean loop in loop
	for(i = 0;i <= 2; i++){
		for(j = 0;j <= 1;j++) {printf("%d, ", num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
