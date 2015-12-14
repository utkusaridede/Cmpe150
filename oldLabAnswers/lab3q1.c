#include<stdio.h>

int main(){
	
	int input;
	int hours, mins, secs;
	
	printf("Please give the time in the type of seconds:");
	printf("\n");
	scanf("%d", &input);
	
	hours = input / 3600;
	input = input - hours*3600;
	
	mins = input / 60;
	input = input - mins*60;
	
	secs = input;
	
	if(hours < 10){
		
		printf("0%d:", hours);
	}else{
		
		printf("%d:", hours);
	}
	
	if(mins < 10){
		
		printf("0%d:", mins);
	}else{
		
		printf("%d:", mins);
	}
	
	if(secs < 10){
		
		printf("0%d", secs);
	}else{
		
		printf("%d", secs);
	}
	
	printf("\n");
	anykey();
	return 0;
}