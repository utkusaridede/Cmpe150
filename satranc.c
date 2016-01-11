#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int tahta[8][8];
	int vezX;
	int vezY;

	int i, j;
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			scanf("%d", &tahta[i][j]);
		}
	}

	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			printf("%d", tahta[i][j]);
			if(tahta[i][j] == 2){
				vezX = i;
				vezY = j;
			}
		}
		printf("\n");
	}

	printf("VezirX: %d, VezirY: %d\n",vezX, vezY);
	int minPath = 9;
	int anlikPath;
	int minX;
	int minY;
	for(i=0; i<8; i++){

		if(tahta[i][vezY] == 1){

			anlikPath = vezX - i;
			printf("Yukaridan asagi, anlikPath: %d\n", anlikPath);
			if(anlikPath < 0) anlikPath *= -1;
			if(minPath > anlikPath){
				minPath = anlikPath;
				minX = i;
				minY = vezY;
			}
		}
	}

	for(j=0; j<8; j++){

		if(tahta[vezX][j] == 1){

			anlikPath = vezY - j;
			printf("Soldan saga, anlikPath: %d\n", anlikPath);
			if(anlikPath < 0) anlikPath *= -1;
			if(minPath > anlikPath){
				minPath = anlikPath;
				minX = vezX;
				minY = j;
			}
		}
	}

	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if(tahta[i][j] == 1){
				if((vezX - i) == (vezY - j) || ((vezX - i) == ((vezY - j)*-1))){

					anlikPath = vezX - i;
					printf("Capraz, anlikPath: %d\n", anlikPath);
					if(anlikPath < 0) anlikPath *= -1;
					if(minPath > anlikPath){
						minPath = anlikPath;
						minX = i;
						minY = j;
					}
				}
			}
		}
	}

	tahta[vezX][vezY] = 0;
	tahta[minX][minY] = 2;
	printf("Min path: %d\n", minPath);

	return 0;
}