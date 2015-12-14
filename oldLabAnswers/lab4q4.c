#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int r;
	srand((unsigned) time(NULL));
	r = rand() % 100;
	
	int guess;
	printf("Please make a guess: ");
	
	scanf("%d",&guess);
	
	while(guess != r){
		
		if(r < guess){
			printf("BELOW\n");
			scanf("%d",&guess);
		}else if(r > guess){
			printf("ABOVE\n");
			scanf("%d",&guess);
		}
		
	}
	
	printf("CORRECT, %d", guess);
	printf("\n");
	anykey();
	return 0;
}