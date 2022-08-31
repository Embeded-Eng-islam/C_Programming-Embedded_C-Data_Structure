#include <stdio.h>
void print_reverse(char *s);
int main()
{
  char s[12];
  scanf("%s",&s);
  print_reverse(s);
  printf("\n");

  return 0;
}

void print_reverse(char *s)
{
  if (*s != '\0')
  {
    print_reverse(s + 1);
    printf("%c", *s);
  }
}
