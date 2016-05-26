#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x, y;
	
	printf("VALUE of f(x)");
	printf("\n\nEnter the x-value: ");
	scanf("%f", &x);

	y=x/70;
	printf("\nf(x) = %.2f", y);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
