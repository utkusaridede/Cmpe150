#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(){
	char str[MAX_LENGTH+1];
	int length,i,isPalindrome=1,counter=0;
	
	scanf("%s",str);//gets(str);
	length=strlen(str);
	
	for(i=0;i<length/2;i++){
		if(str[i]!=str[length-1-i]){
			isPalindrome=0;		
			break;
		}						
	}
	
	if(isPalindrome){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
	
	return 0;
}