#include <stdio.h>
#include <string.h>

int getwordsize();
void reverse(char s[]);
void itoa(int n, char s[]);

int main() {
  char s[1000];
  
  int i = 0;
  itoa(i, s);
  printf("%d to string is: %s\n", i, s);

  i = -128;
  itoa(i, s);
  printf("%d to string is: %s\n", i, s);

  i = 256;
  itoa(i, s);
  printf("%d to string is: %s\n", i, s);
  
  i = 1 << (getwordsize() - 1);
  itoa(i, s);
  printf("%d to string is: %s\n", i, s);
}

int getwordsize() {
  int i = 1;
  int j = 1;
  while ((i <<= 1) != 0) {
    j++;
  }
}

void reverse(char s[]) {
  int c, i, j;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

void itoa(int n, char s[]) {
  int i = 0;
  int sign = n % 10;
  s[i++] = (sign < 0 ? -sign : sign) + '0';

  n /= 10;
  if (n < 0) {
    sign = n;
    n = -n;
  }

  while (n > 0) {
    s[i++] = n % 10 + '0';
    n /= 10;
  }

  if (sign < 0) {
    s[i++] = '-';
  }

  s[i] = '\0';

  reverse(s);
}
