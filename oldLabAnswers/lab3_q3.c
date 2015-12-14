#include <stdio.h>
#include <math.h>
#define G 9.81

int main(){
	
	float vel, h, t_anlik, t;
	float x, y_anlik, y;
	
	printf("Please give the initial velocity of the object:");
	printf("\n");
	scanf("%f", &vel);
	
	printf("\nPlease give the height of the cliff:");
	printf("\n");
	scanf("%f" ,&h);
	
	printf("\nPlease give the time passed:");
	printf("\n");
	scanf("%f" ,&t);
	
	y_anlik= (float)1/2 * G * t * t;
	
	if(y_anlik < h){
		
		printf("\nThe object is still flying.");
		x = t * vel;
		printf("\nFlight X distance: %f", x);
		y = h - y_anlik;
		printf("\nCurrent height: %f", y);
	}else{
		
		printf("\nThe object hit the ground.");
		t_anlik= sqrt(2*h / G);
		printf("\nTime until crash: %f", t_anlik);
		x = t_anlik* vel;
		printf("\nCrash X distance: %f", x);
	}
	
	return 0;
}