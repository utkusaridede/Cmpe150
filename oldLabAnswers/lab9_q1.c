#include <stdio.h>
#define MAX_DEGREE 10

int readPoly(int poly[]){
	
	int degree,i;
	
	scanf("%d", &degree);
	
	for(i=degree; i>=0; i--){
		scanf("%d",&poly[i]);
	}
	return degree;
}
	
void printPoly(int poly[],int degree){
	int i;
	for(i=degree;i>=0;i--){
		printf("%d ",poly[i]);
	}
	printf("\n");
}

int addPolynoms(int p1[],int degree1,int p2[],int degree2, int sum[]){
	int degreesum,i;
	if(degree1>degree2){
		degreesum=degree1;
	}
	else{
		degreesum=degree2;
	}
	for(i=0;i<=degreesum;i++){
		sum[i]=0;
		if(i<=degree1){
			sum[i]+=p1[i];
		}
		if(i<=degree2){
			sum[i]+=p2[i];
		}
	}
	return degreesum;
}

int multPolynoms(int p1[],int degree1,int p2[],int degree2, int mult[]){
	int degreemult,i,j;
	for(i=0;i<=degree1;i++){
		for(j=0;j<=degree2;j++){
			mult[i+j]+=p1[i]*p2[j];
		}
	}
	degreemult=degree1+degree2;
	return degreemult;
}

int main(){
	int p1[MAX_DEGREE+1],degree1,p2[MAX_DEGREE+1],
	degree2,sum[MAX_DEGREE+1],degreesum,
	mult[2*MAX_DEGREE+1]={0},degreemult;
	
	degree1=readPoly(p1);
	degree2=readPoly(p2);
	
	degreesum=addPolynoms(p1,degree1,p2,degree2,sum);
	printPoly(sum,degreesum);
	
	degreemult=multPolynoms(p1,degree1,p2,degree2,mult);
	printPoly(mult,degreemult);

	return 0;
}