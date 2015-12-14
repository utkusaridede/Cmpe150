#include<stdio.h>

int main(){
	
	int N;
	float input;
	float sum=0;
	
	printf("Please enter the NUMBER of floats which you want to sum: ");
	scanf("%d",&N);
	
	printf("\n");
	printf("Enter the floats to sum: ");
	int i;
	for(i=0; i<N; i++){
		
		scanf("%f",&input);
		sum = sum + input;
	}
	
	printf("\n");
	printf("The sum is: %f", sum);
	printf("\n");
	
	anykey();
	return 0;
}