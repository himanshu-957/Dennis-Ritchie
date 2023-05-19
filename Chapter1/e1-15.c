#include<stdio.h>
void convert(int l, int u)
{
	float cel;
	int step = 20;
	float fahr = l;
	while(fahr < u)
	{
		cel = (5.0/9.0)*(fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, cel);
		fahr += step;
	}
}
int main()
{
	int lower, upper;
	printf("Enter the lower limit for conversion: ");
	scanf("%d",&lower);
	printf("Enter the upper limit for conversion: ");
	scanf("%d",&upper);
	convert(lower,upper);
	return 0;
}
