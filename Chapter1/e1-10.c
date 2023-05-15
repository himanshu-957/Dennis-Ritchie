#include<stdio.h>
int main()
{
	char c;
	while((c = getchar()) != '0')
	{
		if(c == '\t'){
			printf("\\t");
			continue;}
		else if(c == '\b'){
			printf("\\b");
			continue;}
		printf("%c",c);
	}
	printf("\n");
	return 0;
}
