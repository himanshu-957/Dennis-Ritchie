#include <stdio.h>

int power(int n, int m)
{
  int res = 1;
  while(m > 0)
  {
    res *= n;
    m--;
  }
  return res;
}
void itob(int n, char s[], int b)
{
  int m,k,e = 0;
  int res = 0;
  int len = 0;
  while(n > 0)
  {
    m = n%10;
    while(m > 0){
    k = m%b;
    res = res + k*power(10,e);
    e++;
    m = m/b;
    }
    n /= 10;
    len++;
  }
  while(res > 0)
  {
    s[len] = (res%10) + '0';
    res /= 10;
    len--;
  }
}

int main()
{
  char s[100];
  itob(4,s,3);
  puts(s);
  return 0;
}
