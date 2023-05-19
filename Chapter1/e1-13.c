#include<stdio.h>
int main()
{
	char c;
	int length = 0;
	while((c = getchar()) != '0')
	{
		printf("%c",c);
		length++;
		if(c == ' ' || c == '\t' || c == '\n')
		{
			printf(" |");
			while(length > 0)
			{
				printf("--");
				length--;
			}
			printf("\n");
		}
	}
	return 0;
}
