#include<stdio.h>

int invert(unsigned x, int p, int n)
{
  return(x ^ (~(~0<<n)<<p));
}

int main()
{
  printf("%d",invert(8, 2, 3));
}
