#include<stdio.h>
int main()
{
	char c;
	int index = 0;
	int flag = 0;
	while((c = getchar()) != '0')
	{
		if(c == '\t')
		{
			while(index/5 != index/5.0 || flag == 0)
			{
				flag = 1;
				printf(" ");
				index++;
			}
			flag = 0;
			continue;
		}
		if(c == '\n')
		{
			index = 0;
		}
		printf("%c",c);
		index++;
	}
	return 0;
}
