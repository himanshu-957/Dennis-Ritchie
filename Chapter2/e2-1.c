#include<stdio.h>
#include<limits.h>
int main()
{
	int n = ~0;
	n = ((unsigned int)n);
	printf("Library - ");
	printf("%d and %d\n", INT_MIN, INT_MAX);
	printf("Calculated - %u and %u\n", n, n-1);

	
	return 0;
}
