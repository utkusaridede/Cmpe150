#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int r;
	r = rand() % 100;
	
	int upBound = 99;
	int lowBound = 0;
	int guess;
	printf("Please make a guess: ");
	scanf("%d",&guess);
	
	while(guess != r){
		
		if(guess > upBound || guess < lowBound){
			printf("WRONG entry! Number is between %d&%d inclusive.", lowBound, upBound);
		}else if(guess > r){
			upBound = guess;
			printf("BELOW!");
		}else if(guess < r){
			lowBound = guess;
			printf("ABOVE!");
		}
		printf("\n");
		scanf("%d",&guess);
	}
	
	printf("CORRECT, %d", guess);
	printf("\n");
	anykey();
	return 0;
}