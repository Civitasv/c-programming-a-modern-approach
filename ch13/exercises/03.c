/**
 *  i: 12
 *  s: abc34
 *  j: 56
 */

#include <stdio.h>

int main()
{
  int i, j;
  char s[20];

  printf("input: ");
  scanf("%d%s%d", &i, s, &j);

  printf("%d\n", i);
  printf("%s\n", s);
  printf("%d\n", j);

  return 0;
}