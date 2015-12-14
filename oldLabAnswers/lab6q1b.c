#include<stdio.h>
#include<math.h>

float fibonacci(int n, float x){

	int first=0;
	int second=1;
	float result=0;
	float mult;
	
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
	mult = pow(x,n);
	result = result * mult;
	return result;
}

int main(){
	int number;
	float x;
	float fib;
	float sonuc=0;
	printf("Enter which fibonacci number do you want to reach: ");
	scanf("%d",&number);
	printf("\n");
	printf("Enter the x value to calculate F_n*x^n: ");
	scanf("%f",&x);
	
	int i;
	for(i=0; i<number+1; i++){
		fib = fibonacci(i, x);
		sonuc = sonuc + fib;
		printf("%f ", sonuc);
	}
	
	printf("\nCalculation is: ");
	printf("%f", sonuc);
	printf("\n");
	
	anykey();
	return 0;
}