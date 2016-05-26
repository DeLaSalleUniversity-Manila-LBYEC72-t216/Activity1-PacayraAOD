#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age, year;
	
	printf("APPROXIMATE AGE");
	printf("\n\nEnter the year of birth: ");
	scanf("%d", &year);
	
	if(year>=0)
	{
		age=2016-year;
		printf("\n\nAge = %d years old", age);
	}
	
	return 0;
}
