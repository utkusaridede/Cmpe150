#include <stdio.h>
#define MAX_DEGREE 10

int readPoly(int poly[]){
	
	int derece,i;
	
	scanf("%d",&derece);
	
	for(i=derece; i>=0; i--){
		scanf("%d",&poly[i]);
	}
	return derece;
}
void printPoly(int poly[], int derece){
	int i;
	for(i=derece;i>=0;i--){
		printf("%d ", poly[i]);
	}
	
}

int addPoly(int sum[], int poly1[], int poly2[], int derece1, int derece2){
	
	int sumDerece;
	int i;
	if(derece1>derece2){
		sumDerece = derece1;
	}else{
		sumDerece = derece2;
	}
	
	for(i=0; i<=sumDerece; i++){
		sum[i]=0;
		if(i<=derece1){
			sum[i]+= poly1[i];
		}
		if(i<=derece2){
			sum[i]+= poly2[i];
		}
		
	}
	return sumDerece;
}

int multPolynoms(int poly1[],int degree1,int poly2[],int degree2,
		int mult[]){
	int degreemult,i,j;
	for(i=0;i<=degree1;i++){
		for(j=0;j<=degree2;j++){
			mult[i+j]+=poly1[i]*poly2[j];
		}
	}
	degreemult=degree1+degree2;
	return degreemult;
}
	

int main(){
	
	int p1[MAX_DEGREE]={0}, p2[MAX_DEGREE]={0};
	int degree1, degree2, sum;
	int sumPoly[MAX_DEGREE];
	
	degree1 = readPoly(p1);
	degree2 = readPoly(p2);
	
	sum=addPoly(sumPoly, p1, p2, degree1, degree2);
	printPoly(sumPoly, sum);
	
	// call multPolynoms
	// print multiplication result via calling printPoly with parameter mult polynom

	return 0;
}