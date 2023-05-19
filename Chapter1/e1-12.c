#include<stdio.h>
int main()
{
	char c;
	int count = 0;
	while((c = getchar()) != '0')
	{
		printf("%c",c);
		if(c == '\n' || c == '\t' || c == ' ')
		{
			printf("\n");
		}
	}
	return 0;
}
