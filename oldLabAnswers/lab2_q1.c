#include <stdio.h>
#define PI 3.14159
#define G 9.81

int main(){
	
	int a,b,c,d;
	float result;
	printf("Give the numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("The result is: ");
	result=(float)a/b + (float)c/d;
	
	printf("%f",result);
	
	return 0;
}