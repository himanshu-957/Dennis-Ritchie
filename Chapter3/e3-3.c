#include<stdio.h>
void expand(char s[],char t[])
{
  int i = 1;
  int j = 1;
  char temp = s[0];
  t[0] = temp;
  while(s[i] != '\0')
  {
    if(s[i] == '-' && temp != '-' && s[i+1] != '\0')
    {
      while(temp != s[i+1])
      {
        temp += 1;
        t[j] = temp;
        j++;
      }
      i += 2;
    }
    else
    {
      temp = s[i];
      t[j] = temp;
      i++;
      j++;
    }
  }
  t[j] = '\0';
}
int main()
{
  char s[100], t[100];
  gets(s);
  expand(s, t);
  puts(t);
	return 0;
}
