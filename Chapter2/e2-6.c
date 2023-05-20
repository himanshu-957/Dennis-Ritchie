#include<stdio.h>

int setbit(unsigned x, int p, int n, unsigned y)
{
  return((x>>(p+1-n) & ~(~0<<n)) + (y & (~0<<n)));
}

int main()
{
  printf("%d",setbit(48, 4, 3, 8));
}
