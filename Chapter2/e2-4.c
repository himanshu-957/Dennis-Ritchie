#include<stdio.h>

void sqeeze(char s1[], char s2[])
{
	int i,j,k;
	for(k = 0; s2[k] != '\0'; k++)
	{

		for(i = j = 0; s1[i] != '\0'; i++)
		{
			//printf("%d %d %d\n",i,j,k);
			if(s1[i] != s2[k])
			{
				s1[j++] = s1[i];
			}
		}
		s1[j] = '\0';
	}
	
}

int main()
{
	char s1[20], s2[20];
	gets(s1);
	gets(s2);
	sqeeze(s1, s2);
	puts(s1);
	return 0;
}

