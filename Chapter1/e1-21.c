#include<stdio.h>
int main()
{
	int index = 0;
	char c;
	int count = 0;
	while((c = getchar()) != '0')
	{
		count = 0;
		if(c == ' ' || c == '\t')
		{
			if(c == '\t')
				printf("\\t");
			while(((c = getchar()) == ' '))
			{
				count++;
			}
			while(count >= 5)
			{
				printf("\\t");
				count -= 5;
			}
			while(count>0)
			{
				printf(" ");
				count--;
			}
			if(c == '\t')
				printf("\\t");
			else
				printf("%c",c);
		}
		else
		{
			printf("%c",c);
		}
	}
	return 0;
}
