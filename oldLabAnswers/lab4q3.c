#include<stdio.h>

int main(){
	
	float part1=0;
	float part2=0;
	float result;
	char input;	
	float mult = 10;
	int pointSeen = 0;
	
	scanf("%c",&input);
	while(input != '!'){
		if(input == '.'){
			
			pointSeen = 1;
			scanf("%c",&input);
		}
		if(pointSeen == 0){
			
			part1 = part1 * 10;
			part1 = part1 + (input - '0');
		}else{
		
			part2 = part2 + (input - '0') / mult;
			mult *= 10;
		}
		scanf("%c",&input);
	}
	result = part1 + part2;
	
	printf("%f",result);
	
	anykey();
	return 0;
}