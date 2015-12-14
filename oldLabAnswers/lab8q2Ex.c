#include<stdio.h>

int main(){
	
	int N;
	scanf("%d",&N);
	float arr[N];
	int i;
	for(i=0 ; i<N ; i++){
		scanf("%f",&arr[i]);
	}
	
	float min,max;
	min=arr[0];
	max=arr[0];
	
	for(i=0 ; i<N ; i++){
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	printf("min: %f, max: %f",min, max);
	
	anykey();
	return 0;
}