#include<stdio.h>

int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;

    for(i=1;(v=v>>1)>0;i++)
        ;
    return i;
}

int rightrot(unsigned x, int n)
{
  int j = x>>n;
  return(j | (x << (wordlength() - n)));
}

int main()
{
  printf("%d",rightrot(16, 2));
}
