#include<stdio.h>
void minMaxMedian(int num1, int num2, int num3, int *minimum, int *maximum, int *median){
	if(num1>num2){
		*minimum = num2;
		*maximum = num1;
		if(num3>num1){
			*median = num1;
			*maximum = num3;
		}else if(num3<num2){
			*median = num2;
			*minimum = num3;
		}else{
			*median = num3;
		}
	}else{
		*minimum = num1;
		*maximum = num2;
		if(num3>num2){
			*maximum = num3;
			*median = num2;
		}else if(num3<num1){
			*minimum = num3;
			*median = num1;
		}else{
			*median = num3;
		}
	}
}
int main(){
	int n1,n2,n3,min,max,med;
	
	scanf("%d%d%d",&n1,&n2,&n3);
	
	minMaxMedian(n1,n2,n3,&min,&max,&med);
	
	printf("min:%d max:%d med:%d ",min,max,med);
	
	anykey();
	return 0;
}