#include <stdio.h>
#include <stdlib.h>

int main(){
	int secrectNumber = 5, guess;
	int count = 1;
	int limit = 3;
	int outOfGuess = 0;
	
	while(guess != secrectNumber && outOfGuess == 0){
		if(count <= limit){
			printf("Enter a number: ");
			scanf("%d", &guess);
			count++;
		}
		else outOfGuess = 1;
	}
	
	if(outOfGuess == 0) printf("You win!");
	else printf("You lose.");
}
