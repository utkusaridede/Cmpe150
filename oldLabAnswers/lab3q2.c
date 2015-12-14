#include<stdio.h>
#include <math.h>
#define G 9.81

int main(){
	
	float vel, h;
	float dist, secs;
	
	printf("Please give the initial velocity of the object:");
	printf("\n");
	scanf("%f", &vel);
	
	printf("\nPlease give the height of the cliff:");
	printf("\n");
	scanf("%f" ,&h);
	
	secs = sqrt(2*h / G);
	
	dist = secs * vel;
	
	printf("\nTime until crash: %f", secs);
	printf("\nCrash x distance: %f", dist);
	
	anykey();
	return 0;
}