#include <stdio.h>
#include <string.h>

int main(){
	
	char arr[100];
	
	gets(arr);
	int i; //For loop
	char c;
	
	printf("Enter the delimeter: ");
	scanf("%c",&c);
	printf("\n");
	
	int len = strlen(arr);
	for(i=0; i<len; i++){
		if(arr[i] == c){
			arr[i] = '\n';
		}
	}
	puts(arr);
	
	return 0;
}