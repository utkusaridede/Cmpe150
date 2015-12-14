#include <stdio.h>
#include <math.h>

int main(){
	int num,kalan;
	int sum=0;
	int power;
	scanf("%d",&num);
	
	while(num>0){
		
		kalan = num/10;
		num=num%10;
		
		power = pow(2,num);
		sum += power;
		num=kalan;
	}
	printf("%d",sum);
	
	return 0;
}