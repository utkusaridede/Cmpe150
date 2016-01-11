#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct family
{
	int size;
	struct person persons[9];
};

struct person
{
	int salary;
	int age;
};

int main()
{
	int i, j;
	struct family families[3];

	int minSalaryIndex = 0;
	int minSalary=999999;
	for(i=0; i<3; i++){
		int total = 0;
		scanf("%d", &families[i].size);
		for(j=0; j<families[i].size; j++){

			scanf("%d", &families[i].persons[j].age);
			scanf("%d", &families[i].persons[j].salary);
			total += families[i].persons[j].salary;
		}
		if(total < minSalary){
			minSalary = total;
			minSalaryIndex = i;
		} 
	}

	struct person tmp;
	for(i=0; i<families[minSalaryIndex].size; i++){
		for(j=0; j<families[minSalaryIndex].size-1; j++){
			if(families[minSalaryIndex].persons[j].salary < 
				families[minSalaryIndex].persons[j+1].salary){
				
				tmp = families[minSalaryIndex].persons[j];
				families[minSalaryIndex].persons[j] = families[minSalaryIndex].persons[j+1];
				families[minSalaryIndex].persons[j+1] = tmp;
			}
		}
	}
	printf("%d\n", families[minSalaryIndex].persons[0].age);

	return 0;
}