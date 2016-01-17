/*
The given program reads two integers: N and M.
Then reads NxM integers as a matrix (image).
Then reads two integers: pI and pJ as the coordinates of the selected pixel.
You should fill the region of the selected pixel with red on the image.
Then the given code prints the image to the screen (currently the unchanged image is printed).
Assume always a white pixel will be selected. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M;
	printf("Enter N and M: ");
	scanf("%d%d", &N, &M);
	printf("Enter the matrix:\n");

	int map[N][M];
	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			scanf("%d", &map[i][j]);
		}
	}

	printf("Enter i and j\n");
	int inputI, inputJ;
	scanf("%d%d", &inputI, &inputJ);

	/* Burada map'i gezip 1 olana kadar 2 ile değiştiricez. */

	int k;
	map[inputI][inputJ] = 2;
	for(k=0; k<N*M; k++){
		
		/* Burasi asil isi yaptigimiz yer. Ust taraf bu islemi kac defa tekrarlayacagizi soyluyor. 
		En az N*M defa yaparsak kesin her olasiligi dusunmus oluruz.*/
		for(i=0; i<N; i++){
			for(j=0; j<M; j++){
				/* Kirmizi ise etrafini kontrol edelim. */
				if(map[i][j] == 2){
					/* Yukari kontrol, ayni zamanda matrixten cikmayalim diye de bakiyor (i-1 >= 0)*/
					if(i-1 >= 0 && map[i-1][j] == 0){
						map[i-1][j] = 2;
					}
					/* Asagi kontrol */
					if(i+1 < N && map[i+1][j] == 0){
						map[i+1][j] = 2;
					}
					/* Sol kontrol */
					if(j-1 >= 0 && map[i][j-1] == 0){
						map[i][j-1] = 2;
					}
					/* Sag kontrol */
					if(j+1 < M && map[i][j+1] == 0){
						map[i][j+1] = 2;
					}
				}
			}
		}
	}

	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}