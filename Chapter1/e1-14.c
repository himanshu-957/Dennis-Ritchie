#include<stdio.h>
int main()
{
        char c;
	int dif;
	int *a;
	int init = 65;
	a =  (int *)calloc(26, sizeof(int));
        while((c = getchar()) != '0')
        {
		dif = c - 'a';
		a[dif]++;
        }
	for(int i = 0; i < 26; i++)
	{
		printf("%c |",init);
		while(a[i]>0)
		{
			printf("-");
			a[i]--;
		}
		printf("\n");
		init++;
	}
	free(a);
        return 0;
}

