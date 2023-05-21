#include<stdio.h>
int bitcount(unsigned x)
{
  int b = 1;
  while(x &= (x-1))
      b++;
  return b;
}
int main()
{
  printf("%d",bitcount(10));
}
