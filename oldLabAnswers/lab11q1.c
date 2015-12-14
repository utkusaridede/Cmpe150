#include<stdio.h>

int eliminateCandidates(int candidates[4][5]){
	int sum[4]={0},i,j;
	int min;
	int position=1;
	for(i=0; i<4; i++ ){
		for(j=0; j<5; j++){
			sum[i]+= candidates[i][j];
		}
	}
	min =  5;
	for(i=0; i<4; i++){
		if(min>sum[i]){
			min = sum[i];
			position = i+1;
		}
	}
	/*for(i=0; i<4; i++){
		if(min==sum[i]){
			candidates[i][0]=1000;
		}
	}*/
	return position;
}
int main(){
	int eliminated, eliminated1,i,j;
	int arr[4][5];
	for (i=0; i<4; i++){
		for(j=0; j<5; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	eliminated = eliminateCandidates(arr);
	eliminated1 = eliminateCandidates(arr);
	
	printf("%d\n", eliminated);
	printf("%d\n", eliminated1);

	
	anykey();
	return 0;
}