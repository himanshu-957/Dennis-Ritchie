#include<stdio.h>
int main()
{
	char str[100];
	gets(str);
	int i = 0;
	int count = 0;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' && count == 1)
		{
		}
		else if(str[i] == ' ' && count == 0)
		{
			count++;
			printf("%c",str[i]);
		}
		else
			printf("%c",str[i]);
		i++;
	}
	printf("\n");
	return 0;
}
