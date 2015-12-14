#include <stdio.h>
#include "math.h"

int main(){
	int num1[5];
	int num2[5];
	int result[6];
	
	int i;
	for(i=4; i>=0 ; i--){
		scanf("%d",&num1[i]);
		
	}
	for(i=4; i>=0 ; i--){
		scanf("%d",&num2[i]);
	}
	int totalindecimal=0;
	for(i=0 ;i<5 ;i++){
		totalindecimal+=((num1[i]+num2[i])*pow(2,i));
	}
	for(i=0 ; i<6 ;i++){
		result[i]=totalindecimal%2;
		totalindecimal/=2;
	}
	for(i =5 ;i>=0 ;i--){
		printf("%d ",result[i]);
	}

	return 0;
}