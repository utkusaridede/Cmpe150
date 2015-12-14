#include<stdio.h>

int main(){
	
	int size;
	float input, min, max;
	int i;
	
	printf("Give the size of array, that is, number of floats: ");
	scanf("%d",&size);
	
	float arr[size];
	
	printf("\nEnter %d floats: ", size);
	for(i=0; i<size; i++){
		scanf("%f",&input);
		arr[i] = input;
	}
	
	min = arr[0];
	max = arr[0];
	for(i=0; i<size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("\nMin: %f, Max: %f\n", min, max);
	
	anykey();
	return 0;
}