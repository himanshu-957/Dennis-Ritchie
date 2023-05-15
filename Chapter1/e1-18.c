#include<stdio.h>
int stat = 0;
int space = 0;
void remove_(char* s)
{
	if(*s == '*')
	{
		space = 1;
		remove_(s+1);
	}
	else if(*s == '\0')
	{
		stat = 1;
		return;
	}
	else
	{
		if(stat == 0)
			if(space == 1)
				printf("%c",*(s-1));
			printf("%c",*s);
			space = 0;
			remove_(s+1);
	}
}
int main()
{
	char s[100];
	gets(s);
	remove_(s);
	printf("\n");
	return 0;
}
