#include <stdio.h>
#include <stdlib.h>

int main()
{
	float area, base, height;
	
	printf("AREA OF TRIANGLE");
	printf("\n\nEnter the base: ");
	scanf("%f", &base);
	printf("\nEnter the height: ");
	scanf("%f", &height);
	
	if(base>=0 && height>=0)
	{
		area=base*height/2;
		printf("\n\nArea = %.2f square units", area);
	}
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
