#include<stdio.h>
#define MAX_SIZE 255

int main()
{
	char s[MAX_SIZE];
	int lim;
	char c;
	//for(i = 0; i < lim -1 && (c = getchar()) != '\n' && c != EOF; ++i)
	for(int i = 0; i < lim - 1; ++i)
	{
		if(c == EOF)
			break;
		else if(c == '\n')
			break;
		else
			s[i] = c;
	}
	return 0;
}
