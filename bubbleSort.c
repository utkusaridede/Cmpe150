#include <stdio.h>

void arrDoldur(int arr[], int size){

	int input;
	int i;
	for (i = 0; i < size; i++){
		scanf("%d", &input);
		arr[i] = input;
	}
}

void bubbleSort(int arr[], int size){

	int tmp;
	int i;
	int k;
	for (k = 0; k < size; k++){
		for (i = 0; i < size-1; i++){	
			if(arr[i] > arr[i+1]){
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[50];
	int size;
	printf("Abime ne kadar lazim?\n");
	scanf("%d", &size);

	arrDoldur(arr, size);
	int i;
	
	bubbleSort(arr, size);
	for (i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}