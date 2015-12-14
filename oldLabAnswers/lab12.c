#include<stdio.h>
#include<math.h>

struct point {
    double x;
    double y;
};

typedef struct point Point;

struct line {
	struct point a,b;
};

double slopePoint(struct point p1, Point p2){
	double s = (p2.y - p1.y) / (p2.x - p1.x);
	return s;
}

double slopeLine(struct line lin){
	double s = (lin.b.y - lin.a.y) / (lin.b.x - lin.a.x);
	return s;
	
	//return slopePoint(lin.a, lin.b);
}

double lengthLine (struct line lin) {
	double tempY = pow(lin.a.y - lin.b.y, 2);
	double tempX = pow(lin.a.x - lin.b.x, 2);
	
	double length = sqrt(tempX + tempY);
	
	return length;
}

int areOrthogonal(struct line l1, struct line l2){
	double s1 = slopeLine(l1);
	double s2 = slopeLine(l2);
	

	double result = s1 * s2;
	printf("%lf\n", result);
	if(result != result || result == -1) {
		return 1;		
	}else{
		return 0;
	}
}

int main(){
	struct point ugur,utku,p1,p2;	
	ugur.x = 3;
	ugur.y = 0;
	
	utku.x = 0;
	utku.y = 0;
	
	p1.x = 2;
	p1.y = 7;
	
	p2.x = 2;
	p2.y = 10;
	
	struct line line1, line2;
	line1.a = ugur;
	line1.b = utku;
	
	line2.a = p1;
	line2.b = p2;
	
	double s = slopePoint(ugur, utku);
	//double s2 = slopeLine(line1);
	//double length = lengthLine(line1);
	
	//int r = areOrthogonal(line1, line2);
	
	printf("%lf\n", s);

		
	anykey();
	return 0;
}