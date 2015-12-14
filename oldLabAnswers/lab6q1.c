#include<stdio.h>
int fibonacci(int n){

	int first=0;
	int second=1;
	int result=0;
	
	if(n==0){
		result=0;
	}
	else if(n==1){
		result=1;
	}
	int i;
	for(i=1; i<n; i++){
		result = first + second;
		first=second;
		second=result;
		
	}
	return result;
}

int main(){
	int number;
	printf("Enter which fibonacci number do you want to reach: ");
	scanf("%d",&number);
	printf("\n");
	int sonuc= fibonacci(number);
	printf("%dth Fibonacci number is: ", number);
	printf("%d", sonuc);
	printf("\n");
	
	anykey();
	return 0;
}