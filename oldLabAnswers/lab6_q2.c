#include <stdio.h>

int isLower(char c){
	if( c<='z' && c>= 'a')
		return 1;
	return 0;
}
int isUpper(char c){
	if( c<='Z' && c>= 'A')
		return 1;
	return 0;
}
int isDigit(char c){
	if( c<='9' && c>= '0')
		return 1;
	return 0;
}
char toUpper(char c){
	return c + 'A' - 'a';
}
char toLower(char c){
	return c + 'a' - 'A';
}
void printDigit(char c){
	if(c=='1') printf("one");
	else if(c=='2') printf("two");
	else if(c=='3') printf("three");
	else if(c=='4') printf("four");
	else if(c=='5') printf("five");
	else if(c=='6') printf("six");
	else if(c=='7') printf("seven");
	else if(c=='8') printf("eight");
	else if(c=='9') printf("nine");
	else if(c=='0')
	printf("zero");
}
int main(){
	char ch;
	scanf("%c",&ch);
	
	while(ch!='!'){
		if(isLower(ch)){
			printf("%c",toUpper(ch));
		}
		if(isUpper(ch)){
			printf("%c",toLower(ch));
		}
		if(isDigit(ch)){
			printDigit(ch);
		}
		if(ch==' '){
			printf(" ");
		}
		scanf("%c",&ch);
	}
	
	return 0;
}