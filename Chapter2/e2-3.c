#include<stdio.h>
#include<string.h>
int power(int x, int y)
{
	int res = 1;
	while(y > 0)
	{
		res *= x;
		y--;
	}
	return res;
}

int htoi(char s[])
{
	int i,n;
	n = 0;
	for(i = strlen(s)-1; i >= 0 ; i--)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			n += (s[i] - '0')*power(16,strlen(s)-1-i);
		}
		else if(s[i] >= 'A' && s[i] <= 'F')
		{
			n += (10 + s[i] - 'A')*power(16,strlen(s)-1-i);
			//printf("%d\n",n);
		}
		else if(s[i] >= 'a' && s[i] <= 'f')
		{
			n += (10 + s[i] - 'a')*power(16,strlen(s)-1-i);
		}
		else
			break;
	}
	return n;
}
int main()
{
	printf("integer of 11111 is %d\n",htoi("ABCD"));

	return 0;
}
