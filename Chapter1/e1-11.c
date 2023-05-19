#include<stdio.h>
int main()
{
	char c;
	int count = 0;
	while((c = getchar()) != '0')
	{
		if(c == '\n' || c == '\t' || c == ' ')
		{
			count++;
		}
	}
	printf("Count = %d\n",count);
	return 0;
}
