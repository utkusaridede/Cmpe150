#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sortIntegers(int n1, int n2, int n3, int *b1, int *b2, int *b3){

	int arr[3];
	arr[0] = n1;
	arr[1] = n2;
	arr[2] = n3;

	int i, j, tmp;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	*b1 = arr[0];
	*b2 = arr[1];
	*b3 = arr[2];
}

int main(){

	int n1, n2, n3;
	int b1, b2, b3;

	int i;
	printf("Abi sayilari gonder: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);

	sortIntegers(n1, n2, n3, &b1, &b2, &b3);

	printf("%d, %d, %d\n", b1, b2, b3);

	return 0;
}