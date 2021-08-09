//array to display sum of the ages
#include <stdio.h>
int main()
{
	int age[5]={22,25,32,35,42,45};
	int n;
	int total=0;
	for(n=0;n<5;n++){
		total+=age[n];
	}
	printf("totL IS %d",total);
	return 0;
}