#include<stdio.h>
void reverse(char* s)
{
	if(*s != '\0')
	{
		reverse(s+1);
		printf("%c",*s);
	}
	else
		return;
}
int main()
{
	char s[100];
	gets(s);
	reverse(s);
	return 0;
}
