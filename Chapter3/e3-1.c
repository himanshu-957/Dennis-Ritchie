#include<stdio.h>
int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  mid = (low+high)/2;
  while (low <= high && x != v[mid]) 
  {
    mid = (low+high)/2;
    if (x < v[mid])
      high = mid + 1;
    else
      low = mid + 1;
  }
  return mid;
}
int main()
{
  int v[5] = {1,2,3,4,5};
  printf("Number 2 is at %d index\n",binsearch(2,v,5));
	return 0;
}
