#include <stdio.h>

int main(){
	
	char s[100];
	
	int i=0;
	
	scanf("%c",&s[0]);
	while(s[i] != '\n'){
		
		i++;
		scanf("%c",&s[i]);
	}
	
	int size=0;
	while(s[size] != '\n'){
		
		size++;
	}
	
	//size = i
	// aaaxaaa
	// abtbx
	// arr = {o, s, m, a, n, \n}
	int counter=0;
	int j;
	for(j=0; j<size/2; j++){
		if(s[j] == s[size - j -1]){
			counter++;
		}
	}
	
	if(counter == size/2){
		printf("This one is symmetric.");
	}else{
		printf("Nope, this one is not symmetric.");
	}
	
	return 0;
}