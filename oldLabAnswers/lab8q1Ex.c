#include<stdio.h>

int main(){
	
	int arr[5];
	int input;
	int i;
	
	for(i=0; i<5; i++){
		scanf("%d",&input);
		arr[i]=input;
	}
	
	for(i=0; i<5; i++){
		printf("%d ", arr[4-i]);
	}
	
	anykey();
	return 0;
}