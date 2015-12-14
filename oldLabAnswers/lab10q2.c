#include<stdio.h>
#include<string.h>

int main(){
	char str[100],ch;
	int i;
	gets(str);
	scanf("%c",&ch);
	int length = strlen(str);
	for(i=0;i<length;i++){
		if(str[i]==ch){
			str[i]='\n';
		}
	}
	puts(str);
	anykey();
	return 0;
}