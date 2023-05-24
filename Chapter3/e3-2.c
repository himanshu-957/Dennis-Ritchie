#include<stdio.h>
void escape(char s[],char t[])
{
  int i = 0;
  int j = 0;
  while(s[i] != '\0')
  {
    switch(s[i])
    {
      case '\n':
      i++;
      t[j++] = '\\';
      t[j++] = 'n';
      break;
      case '\t':
      i++;
      t[j++] = '\\';
      t[j++] = 't';
      break;
      default:
      t[j++] = s[i++];
      break;
    }
  }
  t[j] = '\0';
}
int main()
{
  char s[100], t[100];
  gets(s);
  escape(s, t);
  puts(t);
	return 0;
}
