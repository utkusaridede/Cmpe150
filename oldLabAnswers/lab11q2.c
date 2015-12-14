#include<stdio.h>
void printMap(int map[7][6]){
	int i,j;
	for(i=0; i<7; i++){
		for(j=0; j<6; j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
}

int main(){
	
	int map[7][6];
	int posX;
	int posY;
	int i,j;
	for(i=0; i<7; i++){
		for(j=0; j<6; j++){
			scanf("%d",&map[i][j]);
		}
	}
	//printMap(map);
	
	posX=1;
	posY=1;
	int path = 1;
	while(1){
		map[posX][posY] = path;
		path += 1;
		if(map[posX-1][posY] == -1){
			posX -= 1;
		}else if(map[posX+1][posY] == -1){
			posX += 1;
		}else if(map[posX][posY-1] == -1){
			posY -= 1;
		}else if(map[posX][posY+1] == -1){
			posY += 1;
		}else{
			break;
		}
	}
	printMap(map);
	anykey();
	return 0;
}