
/*
Write a program which reads an integer: N, then reads N integers from the user.
Your program should print which of these N integers appear how many times, with the order of their first appearance.
You shouldn't print a number more than once. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	printf("Enter the N: ");
	scanf("%d", &N);

	/*
	Bu 2-D array sayiyi ve kaç tane olduğunu tutacak.
	Mesela kullanici 5 girdi, arr[0][0]'da 5 varsa, arr[0][1]'de kac tane oldugu yazacak.
	*/
	int arr[N][2];

	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<2; j++){
			/* Array'i sacma bi sayiyla dolduralim ki kullanicinin bu sayiyi girme ihtimali olmasin. */
			arr[i][j] = 98956982;
		}
	}

	int size = 0; /* size 2-D arrayimizde kac tane unique sayi oldugunu tutacak. */
	int input;
	int varMi = 0; /* bu da sayidan elimizde var mi diye bakacak. Yoksa arrayin sonuna eklicez. */
	
	for(i=0; i<N; i++){
		
		scanf("%d", &input);
		/* Array'i geziyoruz burda var mi diye. */
		for(j=0; j<size+1; j++){
			
			if(arr[j][0] == input){
				
				/* Varsa varMi'yi 1 yapiyoruz. */
				varMi = 1;
				/* Oldugu icin kac tane oldugunu tutan yeri 1 arttiriyoruz. */
				arr[j][1] +=1;
			}
		}

		/* Yoksa sonuna ekiyoruz. */
		if(varMi == 0){
			arr[size][0] = input;
			arr[size][1] = 1;
			size += 1;
		}
		/* islemi tekrarlamak icin varMi'yi sifirliyoruz. */
		varMi = 0;
	}

	/* Ekrana yazdirmaca. */
	for(i=0; i<size; i++){
		
		printf("%d-", arr[i][0]);
		printf("%d", arr[i][1]);
		printf("\n");
	}

	return 0;
}