#include<stdio.h>

int main(){
	
	int array[5];
	int input;
	int i;
	
	printf("Enter 5 integers: ");
	for(i=0; i<5; i++){
		scanf("%d",&input);
		array[i] = input;
	}
	printf("\nIn a reverse order: ");
	for(i=0; i<5; i++){
		printf("%d ", array[4-i]);
	}
	printf("\n");
	anykey();
	return 0;
}