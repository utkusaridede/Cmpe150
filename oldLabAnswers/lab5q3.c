#include<stdio.h>
#include<math.h>

int main(){
	int num,kalan;
	int sum=0;
	scanf("%d",&num);
	
	while(num>0){
		
		kalan = num/10;
		num=num%10;
	
		sum += pow(2,num); 
		num=kalan;
	}
	printf("%d",sum);
	
	anykey();
	return 0;
}