#include<stdio.h>

int main()
{
	int blank = 0, tab = 0, newline = 0;
	char c;
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
			newline++;
		else if(c == '\t')
			tab++;
		else if(c == ' ')
			blank++;
		printf("nl = %d, tab = %d, blank = %d\n", newline, tab, blank);
	}
	
	return 0;
}
