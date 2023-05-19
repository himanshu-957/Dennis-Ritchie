#include <stdio.h>
int main()
{
    int index = 0;
    char c;
    char s[20];
    int i = 0;
    while((c = getchar()) != '0')
    {
      s[i] = c;
      i++;
      index++;
      if(c == ' ')
      {
        s[i] = '\0';
        printf("%s",s);
        i = 0;
      }
      if(index == 10)
      {
        printf("\n");
        index = i;
      }
    }
    s[i+1] = '\0';
    printf("%s ",s);
    return 0;
}
