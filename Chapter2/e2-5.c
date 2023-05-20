#include <stdio.h>
void any(char s1[], char s2[])
{
  int flag = 0;
  int index = 100;
  int min = index;
  for(int i = 0; s1[i] != '\0'; i++)
  {
    for(int j = 0; s2[j] != '\0'; j++)
    {
      if(s1[i] == s2[j])
      {
        index = i;
        flag = 1;
        break;
      }
    }
    if(index < min)
    {
      min = index;
    }
  }
  if(flag == 0)
  {
    printf("-1\n");
  }
  else
  {
    printf("%d",min);
  }
}

int main()
{
  char s1[10], s2[10];
  gets(s1);
  gets(s2);
  any(s1,s2);
  return 0;
}
