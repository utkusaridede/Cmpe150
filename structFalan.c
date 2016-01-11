#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

struct line
{
	struct point a1;
	struct point a2;
};

float uzaklikHesapla(struct point o1, struct point o2)
{
	float u = sqrt((o1.y-o2.y)*(o1.y-o2.y) + 
		(o1.x-o2.x)*(o1.x-o2.x));
	return u;
}

int main(){

	struct point p1;
	p1.x = 3;
	p1.y = 6;

	struct point p2;
	p2.x = 4;
	p2.y = 8;

	struct line l1;
	l1.a1 = p1;
	l1.a2 = p2;

	printf("%d\n", l1.a1.x);

	float uzaklik;

	uzaklik = uzaklikHesapla(p1, p2);
	//printf("\nUzaklik: %f\n", uzaklik);

	return 0;
}