#include<stdio.h>

int main(){
	
	float input;
	float sum=0;
	
	printf("INPUT: ");
	scanf("%f", &input);
	
	while (input >= 0){
		
		sum = sum + input;
		scanf("%f", &input);
	}
	
	printf("The sum is %f", sum);
	printf("\n");
	
	anykey();
	return 0;
}